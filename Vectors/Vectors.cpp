// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> //include this library to use vectors

using namespace std;

//passing a vector to a function
void printVector(const vector<int> &n)
{
	for (int i = 0; i < n.size(); i++)
	{
		cout << "n[" << i << "] = " << n[i] << endl;
	}
}



int main()
{
	//vector arrays are more flexible than arrays because they are dynamic and
	//the size does not have to be decided at compile time.
    //this is the syntax for creating vectors
	//vector<datatype> array_name;
	//creating an integer array
	vector<int> grades;

	//if you want to declare the size at compile you can.
	vector<int> vec(10);
	//if you want to declare the size and each element be a number 
	vector<int>vecs(10, 5);


	//usage example
	vector<int> studentGrades = { 20, 30, 45, 60, 90 }; //student grades with data preloaded
	studentGrades.push_back(1); //push_back(n) adds value "n" to the back of the vector array
	studentGrades.insert(studentGrades.begin(), 2); //.insert(*.begin(n), value) , inserts a value into the vector at a location
	cout << "length of the vector array: " << studentGrades.size() << endl; //*.size() gets the size of the vector array

	//print contents of vector array
	for (int i = 0; i < studentGrades.size(); i++)
	{
		cout << "student grades[" << i << "] = " << studentGrades[i] << endl;
	}

	//print vector using the function we created at the top
	vector<int> nVec; //create new vector array
	//populate vector array
	for (int i = 1; i <= 10; i++) 
	{
		nVec.push_back(i);
	}
	//print
	printVector(nVec);
	
	//print specific index
	cout << nVec.at(5) << endl;

	//print the first index of the vector
	cout << nVec.front() << endl;

	//print the last index of the vector
	cout << nVec.back() << endl;

	return 0;
}

