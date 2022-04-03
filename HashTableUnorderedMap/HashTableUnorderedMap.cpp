// HashTableUnorderedMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map> //include this library when using unordered map hash tables
#include <iterator>
using namespace std;


int main()
{
	//unordered map hash table
	//declaring umap to be of <string, int> type
	//key will be of string type and mapped value will be of double type
	unordered_map<string, int> umap;

	//inserting values by using [] operator
	umap["Linuxhint"] = 10;
	umap["Ubuntu"] = 20;
	umap["Linuxmint"] = 30;

	//traversing an unordered map
	for (auto x : umap)
	{
		cout << x.first << " " << x.second << endl;
	}
	string key = "Linuxhint";

	//if key not found in map iterator to end is returned
	if (umap.find(key) == umap.end())
	{
		cout << key << " not found\n\n";
	}
	else
	{
		cout << "Found " << umap.at(key) << "\n\n";
	}

	return 0;
}
