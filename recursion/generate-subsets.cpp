#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> generateSubsets(string str, int endIndex) 
{
	vector<string> res;

	if(endIndex == -1) 
	{
		res.push_back("");
		return res;
	}

	
	vector<string> substringSubsets = generateSubsets(str, endIndex-1);
	for(auto& it: substringSubsets)
	{
		res.push_back(it);
		res.push_back(it + str[endIndex]);
	}
	return res;
}

int main() 
{
	vector<string> subsets = generateSubsets("ABC", 2);

	for(auto& it: subsets)
	{
		cout << "\"" << it << "\"" << " ";
	}
}
