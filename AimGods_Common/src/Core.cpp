#include "Core.hpp"

using namespace Zagreus;

bool Zagreus::startUp = true;
std::string Zagreus::remove_numeric_suffix(const std::string& str) {
    size_t pos = str.find_last_of('_');

    if (pos != std::string::npos && pos > 0) {
        return std::string(str.data(), pos);
    }

    return str;
}
bool Zagreus::ShouldLog(const std::string& FunctionName) {
    for (const auto& substr : functionsToSkip) {
        if (FunctionName.find(substr) != std::string::npos) {
            return false;
        }
    }
    return true;
}
void Zagreus::hProcessEvent(SDK::UObject* object, SDK::UFunction* function, void* params)
{
    Core& core = Core::getCore();
    if (Zagreus::startUp)
    {
        Zagreus::startUp = false;
        core.fireManaged(eventType::GAME_INITIALIZED, object, function, params);
    }
    core.fireRaw(object->GetName(), function->GetName(), object, function, params);


    auto hook = core.getHookDetails<tProcessEvent>("ProcessEvent");

    if(GetAsyncKeyState(VK_CAPITAL) & (1 << 16) && Zagreus::ShouldLog(function->GetFullName()))
    {
        core.Log("ProcessEvent: " + function->GetName() + "called by: " + object->GetFullName());
    }
    return hook->rFunction(object, function, params);

}

template<typename T>
HookDetails<T>* Core::getHookDetails(const std::string& name)
{
    Core& core = Core::getCore();
    IHookDetails* hookbase = core.hooks[name];
    if (!hookbase)
    {
        core.Log("Hook not found");
        return nullptr;
    }
    //dynamic cast should be used here, however reinterpret_cast is more performant
    HookDetails<T>* hook = reinterpret_cast<HookDetails<T>*>(hookbase);
    if (!hook) {
        core.Log("Dynamic cast failed for hook: " + name);
        return nullptr;
    }
    return hook;
}

void Core::updateCore()
{
    this->Log("Updatecore started.");
    while (shouldUpdate)
    {
        if (processEventData.object)
        {
            auto object = processEventData.object;
            auto function = processEventData.function;
            auto params = processEventData.params;
        }

        std::this_thread::sleep_for(std::chrono::microseconds(5));
    }
    this->Log("Updatecore shutting down");
    return;
}

void Core::fireManaged(const eventType& event, SDK::UObject* objectname, SDK::UFunction* functionname, void* params)
{
    if (managedEvents.find(event) != managedEvents.end())
    {
        managedEvents[event](objectname, functionname, params);
    }
    else
    {
        this->Log("Event not found: " + event);
    }
}

void Core::fireRaw(std::string objectName, std::string functionName, SDK::UObject* object, SDK::UFunction* function, void* params) {
        if (rawEvents[objectName].find(functionName) != rawEvents[objectName].end())
		{
			rawEvents[objectName][functionName](object, function, params);
		}
		else
		{
            return;
		}
}

void Core::LogBackend(const std::string& message)
{
    if (fileStream.is_open())
    {
        fileStream << message << "\n";
    }
    else
    {
        std::cerr << "Unable to write to log file." << "\n";
    }
    std::cout << message << "\n";
}

Core::Core()
{
    if (AllocConsole())
    {
        FILE* c_file;
        freopen_s(&c_file, "CONIN$", "r", stdin);
        freopen_s(&c_file, "CONOUT$", "w", stdout);
        freopen_s(&c_file, "CONOUT$", "w", stderr);
    }
    else
    {
        std::cerr << "Failed to alloc console." << std::endl;
    }
    const auto now = std::chrono::system_clock::now();
    std::ostringstream oss;
    fileStream.open(std::format("{:%m-%d-%Y_%H_%M_%OS}", now), std::ios::app);
    if (!fileStream)
    {
        std::cerr << "Failed to open log file." << std::endl;
    }

    //Hook initialization
    HookDetails<tProcessEvent>* hook = new HookDetails<tProcessEvent>;
    hook->name = "ProcessEvent";
    hook->pattern = reinterpret_cast<const unsigned char*>("\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xEC\xF0\x00\x00\x00\x00");
    hook->mask = "xxxxxxxxxxxxxxxx????";
    hook->hFunction = hProcessEvent;
    this->hook(hook);
    //create updateCore thread
    thread = std::jthread(&Core::updateCore, this);
    this->Log("Core initialized.");
}

void Core::registerManagedEvent(const eventType& eventtype, std::function<void(SDK::UObject* object, SDK::UFunction* function, void* params)> func)
{
	
	managedEvents[eventtype] = func;
}

void Zagreus::Core::registerRawEvent(std::string objectName, std::string functionName, std::function<void(SDK::UObject* object, SDK::UFunction* function, void* params)> func)
{
    rawEvents[objectName][functionName] = func;
}

template <typename T>
void Core::hook(HookDetails<T>* hook) {

    hook->rFunction = (T)Mem::Scan(GetModuleHandleA(nullptr), hook->pattern, hook->mask);

    this->Log("Hooking into " + hook->name);
    if(DetourTransactionBegin() != NO_ERROR)
	{
		this->Log("Failed to begin transaction");
		return;
	}
    if(DetourUpdateThread(GetCurrentThread()) != NO_ERROR)
    {
        this->Log("Failed to update thread");
		return;
	}
    if(DetourAttach(&(PVOID&)hook->rFunction, (PVOID)hook->hFunction) != NO_ERROR)
    {
		this->Log("Failed to attach");
        return;
	}
    if (DetourTransactionCommit() != NO_ERROR)
    {
        this->Log("Failed to commit transaction");
        return;
    }
    hooks[hook->name] = hook;
}
Core& Core::getCore()
{
    static Core instance;
    return instance;
}

void Core::Log(const std::string& message)
{
    auto time = std::chrono::system_clock::now();
    std::time_t time_t = std::chrono::system_clock::to_time_t(time);
    std::string time_str = std::ctime(&time_t);
    time_str.pop_back();
    this->LogBackend("[" + time_str + "] " + message);
}

void Core::staticLog(const std::string& message)
{
    Core& core = Core::getCore();
    core.Log(message);
}