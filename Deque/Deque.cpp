// Deque.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <deque> //use this library when using deque

using namespace std;



int main()
{
	//deque is used to when you need to add/push and remove/pop nodes from the front and the back of a list.
	//deque syntax deque<datatype> name = {1,2,3,4,5};
	deque<int> deq = { 1,2,3,4,5 };
	deq.push_front(0); //adds element to front of list {0,1,2,3,4,5}
	deq.push_back(6); //adds element to end of list {0,1,2,3,4,5,6}
	deq.insert(deq.begin() + 2, 10); //adds element to front of list after the first 2 nodes, {0,1,10,2,3,4,5,6}
	deq.pop_back(); //removes element from end of list {0,1,10,2,3,4,5}
	deq.pop_front(); //removes element from front of list {1,10,2,3,4,5}
	deq.erase(deq.begin() + 1); //erases element after the first node {1,2,3,4,5}
	deq.erase(deq.begin() + 3, deq.end()); //erases everything after the third node {1,2,3}

	return 0;
}