// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//create the nodes for the linked list
//nodes have 2 parts, data and a pointer to the next node
struct node
{
	int data; //data
	node *next;  //pointer to next node
};

//create a Class that will contain all the functions and data members that are required for
//a linked list.  This class will use the structer "Node" for the creation of the linked list.
//we have to create the first and last node in order to traverse the list.
class linked_list
{
private:
	node *head, *tail; //keep track of start and end of the list.

public:
	linked_list()
	{
		head = NULL; //empty head/start node
		tail = NULL; //empty tail/end node
	}

	//function to add a node to the linked list
	void addNode(int n)
	{
		node *tmp = new node;  //allocating space for new node
		tmp->data = n;  //store value given in the function parameter inside the struct data variable
		tmp->next = NULL;  //store struct "node" and empty value

		if (head == NULL)  //if head is empty, create the first and last node 
		{
			head = tmp;
			tail = tmp;
		}
		else //linked list is not empty, add new node at the end of the list
		{
			tail->next = tmp;
			tail = tail->next;
		}
	}
};

int main()
{
    //create linked list and add nodes to it
	linked_list a;
	a.addNode(1);
	a.addNode(2);
	return 0;
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
