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
/// <summary>
/// Core functionality for the mod, both Client and Server inherit from this class.
/// </summary>
namespace Zagreus
{
    class Game {
            public:
                MapType currentMap;
    };

    enum MapType {
        TRANMAP,
        COLOSSEUM,
        EGYPT,
        MAPTYPE_MAX = 255
    };

    enum eventType
    {
        PROCESS_EVENT
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
    class Core
    {
        std::ofstream fileStream;
        std::unordered_map<std::string, eventType> events;
        
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
    public:
        
        void eventHandler()
        {
            
        }
        
        std::unordered_map<std::string, IHookDetails*> hooks;
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
        /// @param name Name of the hook, gets used to find the hook.
        /// @return Returns the HookDetails struct of the wanted hook.
        /// 
        template <typename T>
        HookDetails<T>* getHookDetails(const std::string name);
    };
    
}
