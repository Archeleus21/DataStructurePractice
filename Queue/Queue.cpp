// Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue> //include this library to use queue

using namespace std;


int main()
{
	//queue is first on first out (FIFO) 
	//Syntax is queue<datatype> name;
	queue<int> q;
	//populate queue
	q.push(1); //queue becomes {1}
	q.push(2); //queue becomes {2}
	q.push(3); //queue becomes {3}
	
	//prints what is in the queue
	cout << "\n The size of the queue is: " << q.size() << endl;

	//pop out node
	q.pop(); //queue becomes {2,3}
	//push new node
	q.push(4); //queue becomes {2,3,4}

	//while q is not empty print whats in the queue
	while (!q.empty())
	{
		cout << "\n" << q.front(); //print out whats in the front of the queue
		q.pop();
		cout << "\n";
	}

	return 0;
}