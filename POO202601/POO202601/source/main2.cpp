#include "Prerequisites.h"
#include "ProgrammingPattterns/SingletonMultiThread/SingletonMultiThread.h"

SingletonMultiThread* SingletonMultiThread::instance = nullptr;
std::mutex SingletonMultiThread::mutex_;

void 
useSingletonMultiThread(int id) {
	SingletonMultiThread& singleton = SingletonMultiThread::getInstance();
	// Usar la instancia del singleton
	std::cout << "Thread " << id << 
		" using SingletonMultiThread instance at address: " << 
		&singleton << std::endl;
	std::cout << std::endl;
}

int main() {
	//const int numThreads = 5;
	//std::vector<std::thread> threads;
	//for (int i = 0; i < numThreads; ++i) {
	//	threads.emplace_back(useSingletonMultiThread, i);
	//}
	//for (auto& th : threads) {
	//	th.join();
	//}

	std::thread t1(useSingletonMultiThread, 1);
	std::thread t2(useSingletonMultiThread, 2);

	t1.join();
	t2.join();



	return 0;
}