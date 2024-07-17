// FunctionQueue.h (Header file)
#pragma once

#include <functional>
#include <mutex>
#include <queue>
#include <iostream>
class FunctionQueue {
public:
  static void AddFunction(std::function<void()> function);
  static void ProcessFunctions();

private:
  static std::queue<std::function<void()>> functionQueue;
  static std::mutex queueMutex;
};
inline std::queue<std::function<void()>> FunctionQueue::functionQueue;
inline std::mutex FunctionQueue::queueMutex;

inline void FunctionQueue::AddFunction(std::function<void()> function) {
  std::lock_guard<std::mutex> lock(queueMutex);
  functionQueue.push(function);
}

inline void FunctionQueue::ProcessFunctions() {
  try {
    std::lock_guard<std::mutex> lock(queueMutex);

  } catch (const std::exception &e) {
    std::cerr << "Exception in ProcessFunctions: " << e.what() << std::endl;
  }
  while (!functionQueue.empty()) {
    auto function = functionQueue.front();
    functionQueue.pop();
    function();
  }
}