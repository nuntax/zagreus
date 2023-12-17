#pragma once
struct thread_data
{
	int thread_id;
	bool bDestroyeable;
};

class ThreadManager
{
	void ThreadLoop();

};

