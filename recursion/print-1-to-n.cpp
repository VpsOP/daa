#include <iostream>
using namespace std;

void printRecursion(int n);

int main() 
{
	printRecursion(12);
}

void printRecursion(int n) 
{
	if(n == 0) return;
	printRecursion(n-1);
	cout << n << " ";
}
