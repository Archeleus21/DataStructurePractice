// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack> //include this library to use Stacks

using namespace std;

//create function to showstackdata, create copy of stack in order to print contents and stack is removed once all data is printed.
void showStackData(stack <int> s)
{
	//runs while stack is not empty or stack contains data
	while (!s.empty())
	{
		cout << '\t' << s.top(); //prints the whats on the top('\t' inserts tab spacing between data)
		s.pop(); //pops out what's on the top
	}
	cout << '\n'; //prints when stack is empty ('\n' prints on a new line)
}

int main()
{
	//create stack and populate stack
	stack<int> stk;
	stk.push(1);
	stk.push(3);
	stk.push(2);
	stk.push(5);
	stk.push(1);

	//print stack data
	cout << "The stack is: ";
	showStackData(stk);

	//print size of stack
	cout << "\ns.size(): " << stk.size();
	//print whats on top of the stack
	cout << "\ns.top(): " << stk.top();

	//pop out nodes from the stack
	cout << "\ns.pop(): ";
	stk.pop();
	//print new stack data
	showStackData(stk);

	return 0;
}