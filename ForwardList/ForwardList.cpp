// ForwardList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <forward_list> //include this library when using the forward list

using namespace std;

int main()
{
	//basic syntax of forward list foward_list<datatype> name = {element1, element2}
	forward_list<int> fwd_list = { 1, 2, 3 };
	//push a new element into the foward list
	fwd_list.push_front(0); //new list is {0,1,2,3}
	auto it = fwd_list.before_begin(); //store location of first element
	fwd_list.insert_after(it, 5); //inserts a 5 after the first element. {0,5,1,2,3}
	fwd_list._Insert_after(fwd_list.before_begin(), 6); //inserts a 6 after the first element. {0,6,5,1,2,3}
	fwd_list.pop_front(); //pops first element out of list {6,5,1,2,3}
	fwd_list.erase_after(fwd_list.before_begin()); //erases element after the first one {6,1,2,3}
	fwd_list.erase_after(it, fwd_list.end()); //erases everything after the first element {6}

	return 0;
}
