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

inline void ThreadManager::ThreadLoop() {
  while (true) {
    for (auto thread : m_threads) {
      if (thread->bDestroyeable) {
        std::cout << "Thread " << thread->thread_id << " destroyed"
                  << std::endl;
        TerminateThread(thread->hThread, 0);
        m_threads.erase(std::remove(m_threads.begin(), m_threads.end(), thread),
                        m_threads.end());
      }
    }
    Sleep(1000);
  }
}
typedef DWORD(WINAPI *ThreadFunction)(LPVOID lpParameter);
/*
 *The lpParameter is the destroyeable bool
 *If u want to destroy the thread, cast the lpParameter to bool and set it to
 *true
 */
inline thread_data *ThreadManager::CreateRoutine(ThreadFunction function) {
  thread_data *data = new thread_data();
  data->hThread =
      CreateThread(nullptr, 0, function, &data->bDestroyeable, 0, nullptr);
  m_threads.push_back(data);
  data->thread_id = m_threads.size();
  return data;
}

inline ThreadManager g_ThreadManager;