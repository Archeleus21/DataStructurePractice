// BloomFilter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> //include vector library when using vectors for blook filters

using namespace std;

//create a class for bloom filter
class bloom_filter
{
	//using a Bool vector to mark data.
	vector<bool> data;
	int nBits;
	int hash(int num, int key)
	{
		//switch statement to run the 3 cases described below to populate the hash
		switch (num)
		{
		case 0:
			return key % nBits;
		case 1:
			return (key / 7) % nBits;
		case 2:
			return (key / 11) % nBits;
		}
		return 0;
	}
public:
	//constructor for bloom filter
	bloom_filter(int n) : nBits(n)
	{
		data = vector<bool>(nBits, false);
	}

	void lookup(int key)
	{
		bool result = data[hash(0, key)] & data[hash(1, key)] & data[hash(2, key)];
		
		if (result)
		{
			cout << key << " may be present." << endl;
		}
		else
		{
			cout << key << "is not present." << endl;
		}
	}

	void insert(int key)
	{
		data[hash(0, key)] = true;
		data[hash(1, key)] = true;
		data[hash(2, key)] = true;

		cout << key << " inserted." << endl;
	}
};

int main()
{
	//bloom filter checks if a variable is already stored in the container by a series of 1s and 0s
	//uses:
	//h1(x) = x%7 where 7 is the container size and x being the variable being stored
	//h2(x) = (x/7)%7
	//h3(x) = (x/11)%7
	//for example: 100 returns Hash(100)={2,0,2}
	//original{0,0,0,0,0,0,0} new{1,0,1,0,0,0,0}
	//for example: 54 returns Hash(54)={5,0,4}
	//last example{1,0,1,0,0,0} new{1,0,1,0,1,1,0}
	//when a node/key/variable is missing from hash table it is 100% accurate.
	//when a node/key/variable is present it is "Likely" present not 100% accurate.
	
	//enter data into the bloom filter
	bloom_filter bf(11);
	bf.insert(100);
	bf.insert(54);
	bf.insert(82);
	bf.insert(5);
	bf.insert(2);
	bf.insert(100);
	bf.insert(8);
	bf.insert(65);


	return 0;
}
