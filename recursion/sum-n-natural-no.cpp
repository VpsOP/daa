#include <iostream>
using namespace std;

int naturalSum(int n);

int main() 
{
	cout << naturalSum(10);
}

int naturalSum(int n) 
{
	if(n == 1) return 1;
	return n + naturalSum(n-1);
}
