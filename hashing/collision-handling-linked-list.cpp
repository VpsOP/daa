#include <bits/stdc++.h>
using namespace std;

struct myHash 
{
	int BUCKET;
	list<int> *table;

	myHash(int b)
	{
		BUCKET = b;
		table = new list<int>[b];
	}

	int hash(int key) 
	{
		return key % BUCKET;
	}

	void insert(int key) 
	{
		int h = hash(key);
		table[h].push_back(key);
	}

	void remove(int key) 
	{
		int h = hash(key);
		table[h].remove(key);
	}

	bool search(int key) 
	{
		int h = hash(key);

		for(auto i : table[h])
		{
			if(i == key) return true;
		}
		return false;
	}
};

int main() 
{
	myHash *hash1 = new myHash(7);
	hash1->insert(13);
	hash1->insert(23);
	hash1->insert(51);
	hash1->insert(47);
	hash1->insert(11);

	cout << hash1->search(11) << endl;
	cout << hash1->search(61) << endl;
}
