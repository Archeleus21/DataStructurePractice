// DoublyLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list> //need to add this library to use Lists

using namespace std;

//create a construct to start the doubly linked list
struct doubly_linked_list
{
	int data; //store data for node
	doubly_linked_list *next, *prev; //the address of the next and address of the previous node
};

int main()
{
	//using a list is like a doubly linked list in the way you can access nodes forward and back
	//list syntax is list<datatype> name = {element1, element2,...}
	list<int> list1 = { 1,2,3,4,5 };
	list1.push_back(6); //adds to end of list, {1,2,3,4,5,6}

	list1.insert(next(list1.begin()), 0); //adds element after first node {1,0,2,3,4,5,6}

	list1.insert(list1.end(), 7); //adds element to end of list {1,0,2,3,4,5,6,7}

	list1.pop_back(); //pops out the last element in the list {1,0,2,3,4,5,6}
	list1.pop_front(); //pops out the first element in the list {0,2,3,4,5,6}

	//iterate the list and print the contents
	for (auto i : list1)
		cout << i << " ";

	return 0;
}