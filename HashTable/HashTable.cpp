// HashTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//hash tables use a unique key to locate specific index locations that contain data.
//instead of searching for data through the entire array, it uses the key
//to calculate the index location and then goes directly to where the data should be stored.
//example:

//Data to store variables
struct DataItem
{
	int data;
	int key;
};
//Hash Method to compute hash data
int hashCode(int key)
{
	return key % SIZE;
}

//Search Operation
struct DataItem *search(int key)
{
	//get the Hash
	int hashIndex = hashCode(key);

	//move in array until an empty node
	while (hashArray[hashIndex] != NULL)
	{
		if (hashArray[hashIndex] = > key == key)
		{
			return hashArray[hashIndex];
		}

		//go to next cell
		++hashIndex;

		//wrap around the table

		hashIndex %= SIZE;
	}

	return NULL;
}

//Insert Operation
void insert(int key, int data)
{
	//create pointer to item
	struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
	item->data = data;
	item->key = key;

	//get the hash
	int hashIndex = hashCode(key);

	//move in array until an empty node or deleted cell
	while (hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1)
	{
		//go to the next cell
		++hashIndex;

		//wrap around the table
		hashIndex %= SIZE;
	}

	hashArray[hashIndex] = item;
}

//Delete Operation
struct DataItem* delete(struct DataItem* item)
{
	int key = item->key;

	//get the hash
	int hashIndex = hashCode(key);

	//move in array until an empty node
	while (hashArray[hashIndex] != NULL)
	{
		if (hashArray[hashIndex]->key == key)
		{
			//assign a dummy item at deleted position
			hashArray[hashIndex] = dummyItem;
			return temp;
		}
	}
}

int main()
{


	return 0;
}