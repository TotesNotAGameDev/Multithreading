// Multithreading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Multithreading.h"

static void ThreadCounter()
{
	mThreadCount++;
}

void NumberRun(std::vector<int> num)
{
	std::cout << "Thread started!" << std::endl;
	ThreadCounter();
	std::cin.get();
	for (const auto& i : num)
	{
		int myMax = (std::rand()/10);
		for (int j = 0; j < myMax; j++)
		{
			std::cout << "Number: " << j << "/" << myMax << std::endl;
		}
	}

}


int main()
{
	std::vector<int> myVec(4,0);
    std::thread myThread2(NumberRun, myVec);
    std::thread myThread(NumberRun, myVec);
    std::thread myThread1(NumberRun, myVec);

	myThread2.join();
	myThread.join();
	std::cout << "All threads are finished!" << std::endl;
	std::cout << "Number of threads run: " << mThreadCount;
	std::cin.get();

	myThread1.join();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
