#include "ThreadManager.h"

void ThreadManager::ThreadLoop() {
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
thread_data *ThreadManager::CreateRoutine(ThreadFunction function) {
  thread_data *data = new thread_data();
  data->hThread =
      CreateThread(nullptr, 0, function, &data->bDestroyeable, 0, nullptr);
  m_threads.push_back(data);
  data->thread_id = m_threads.size();
  return data;
}
