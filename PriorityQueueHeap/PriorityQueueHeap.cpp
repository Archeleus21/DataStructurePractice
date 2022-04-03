// PriorityQueueHeap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue> //include this library to use priority queue.

using namespace std;

int main()
{
	//priority queue arranges elements in non increasing order, largest to smallest.
	//syntax priority_queue<datatype> name;
	priority_queue<int> q;
	//populate queue
	q.push(1);  //queue is {1}
	q.push(2);  //queue is {2,1}
	q.push(3);  //queue is {3,2,1}
	q.push(4);  //queue is {4,3,2,1}

	//print size
	cout << "\n The size of the queue is: " << q.size() << endl;
	//print top
	cout << "\n The top element is " << q.top() << endl;

	//while queue is not empty
	while (!q.empty())
	{
		cout << "\n" << q.top(); //print top
		q.pop();
		cout << "\n";  //new line
	}



	return 0;
}