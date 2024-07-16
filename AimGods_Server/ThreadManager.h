#pragma once
#include <Windows.h>

#include <iostream>
#include <vector>
struct thread_data {
  int thread_id;
  bool bDestroyeable = false;
  HANDLE hThread;
};
typedef bool (*thread_func)(bool *destroy);
class ThreadManager {
public:
  /*
   * Dont call ThreadLoop on the game or render thread.
   */
  void ThreadLoop();
  thread_data *CreateRoutine(LPTHREAD_START_ROUTINE function);

private:
  std::vector<thread_data *> m_threads;
};

inline ThreadManager g_ThreadManager;