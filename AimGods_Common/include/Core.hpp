#pragma once
#include "Mem.hpp"
#include <chrono>
#include <fstream>
#include <functional>
#include <SDK.hpp>
#include <SDK/CoreUObject_classes.hpp>
#include <detours/detours.h>
#include <unordered_map>
#include <format>
#include <thread>
#include <mutex>
#include <unordered_set>

namespace Zagreus
{
    extern bool startUp;

    struct ProcessEventData{
        SDK::UObject* object;
        SDK::UFunction* function;
        void* params;
    };

    static const std::unordered_set<std::string> functionsToSkip = {
    "Waterfall",
    //"Widget",
    "Camera",
    "HUD",
    "Tick",
    "Anim",
    //"UpdateFunc",
    //"WB",
    //"ServerMoveNoBase",
    //"ClientAckGoodMove",
    //"UMG",
    //"TextValue",
    //"FloatValue",
    //"ReplicatedWorldTimeSeconds",
    //"CheckTarget",
    //"ServerMoveOld",
    //"OnLanded" 
    };
    bool ShouldLog(const std::string& FunctionName);

    enum MapType {
        TRANMAP,
        COLOSSEUM,
        EGYPT,
        MAPTYPE_MAX = 255
    };

    enum eventType
    {
        PROCESS_EVENT,
        GAME_INITIALIZED,
    };
    void hProcessEvent(SDK::UObject* object, SDK::UFunction* function, void* params);
    
    class IHookDetails {
    public:
        virtual ~IHookDetails() = default;
    };
    template <typename T>
    
    struct HookDetails: IHookDetails {
        std::string name;
        const unsigned char* pattern;
        const char* mask;
        T rFunction;
        T hFunction;
    };
    typedef void (*tProcessEvent)(SDK::UObject*, SDK::UFunction*, void*);
    typedef void(__fastcall *tNotifyBeginplay)(SDK::AWorldSettings *);
    typedef void(__fastcall *tHandleHasMatchStarted)(SDK::AAGGameMode *);
    typedef void(__fastcall *tRespawnPlayer)(void *, void *);

    class gameDetails
    {
    public:
        MapType currentMap;
        SDK::UWorld* GWorld;  
    };

    /// <summary>
    /// Core functionality for the mod, both Client and Server inherit from this class.
    /// </summary>
    class Core
    {

        bool shouldUpdate = true;
        std::mutex processEventMutex;
        ProcessEventData processEventData;
        std::ofstream fileStream;
        
        virtual void LogBackend(const std::string& message);
        Core();
        Core(const Core&) = delete;
        Core& operator=(const Core&) = delete;
        template<typename T>
        void hook(HookDetails<T>* hook);
        /// <summary>
        /// Updates the core, works like a tick function.
        /// </summary>
        void updateCore();
        friend void hProcessEvent(SDK::UObject* object, SDK::UFunction* function, void* params);
        std::jthread thread;
        std::unordered_map<std::string, IHookDetails*> hooks;

        
        std::unordered_map<eventType, std::function<void()>> events;
    public:
   
        void registerEvent(const eventType& eventtype, std::function<void()> func);


        void fire(const eventType& eventtypes);

        /// 
        /// @return Returns the global Core instance
        /// 
        static Core& getCore();
        /// 
        /// @param message Message that should be logged
        /// 
        void Log(const std::string& message);
        /// 
        /// @param message Message that should be logged
        /// 
        static void staticLog(const std::string& message);
        /// 
        /// @tparam T Signature for the function of the wanted hook.
        /// @param  Name of the hook, gets used to find the hook.
        /// @return Returns the HookDetails struct of the wanted hook.
        /// 
        template <typename T>
        HookDetails<T>* getHookDetails(const std::string& name);
    };
    
}
