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
	cout << n << " ";
	printRecursion(n-1);
}
