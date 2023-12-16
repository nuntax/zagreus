#include "FunctionQueue.h"
#include <iostream>
std::queue<std::function<void()>> FunctionQueue::functionQueue;
std::mutex FunctionQueue::queueMutex;

void FunctionQueue::AddFunction(std::function<void()> function) {
    std::lock_guard<std::mutex> lock(queueMutex);
    functionQueue.push(function);
}

void FunctionQueue::ProcessFunctions() {
    try {
        std::lock_guard<std::mutex> lock(queueMutex);
        
    } catch (const std::exception& e) {
        
        std::cerr << "Exception in ProcessFunctions: " << e.what() << std::endl;
    }
    while (!functionQueue.empty()) {
        auto function = functionQueue.front();
        functionQueue.pop();
        function();
    }
}