// QuickSortDivideConquer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

//create function to swap index locations
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

//create function to partition array
int partition(int arr[], int low, int high)
{
	//store pivot index
	int pivot = arr[high];
	//store lowest index
	int i = (low - 1);

	//iterate through array
	for (int j = low; j <= high - 1; j++)
	{
		//check if array element is less than pivot
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return(i + 1);
}

//create function called quickSort to sort array
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		//partition the array 
		int pivot = partition(arr, low, high);

		//sort the sub arrays independently 
		quickSort(arr, low, pivot - 1);
		quickSort(arr, pivot + 1, high);
	}
}
int main()
{
	int arr[] = { 100, 20, 58, 67, 37, 45, 2 ,4 ,94 };
	int size = sizeof(arr) / sizeof(arr[0]);

	quickSort(arr, 0, size - 1);

	cout << "Sorted array: \n";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}