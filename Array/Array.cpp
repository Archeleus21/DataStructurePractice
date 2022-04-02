// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>  //include array library

using namespace std;

//function to print array
//using constant prevent the compiler from making a copy of the array to improve preformance
void printArray(const array<int, 5> &arr) 
{
	cout << "Length: " << arr.size() << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		cout << "n[" << i << "]" << arr[i] << endl;
	}
}

int main()
{
	//simple declaration of a standard (STP) array.
	//array<datatype, array size> "arrayname";
	//integer array
	array<int, 5> arr = { 1,2,3,4,5 };
	
	//print array
	std::cout << arr[2] << endl;
	//print size of array
	cout << "The length of the array is " << arr.size() << endl;

	//pass the array using a function
	printArray(arr);

	return 0;
}
