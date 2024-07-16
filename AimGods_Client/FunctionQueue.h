// FunctionQueue.h (Header file)
#pragma once

#include <functional>
#include <mutex>
#include <queue>

class FunctionQueue {
public:
    static void AddFunction(std::function<void()> function);
    static void ProcessFunctions();

private:
    static std::queue<std::function<void()>> functionQueue;
    static std::mutex queueMutex;
};
