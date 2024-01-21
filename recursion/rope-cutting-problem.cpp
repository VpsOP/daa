#include <iostream>
using namespace std;

int cutRope(int n, int a, int b, int c) 
{
	if(n == 0) return 0;
	if(n < 0) return -1;

	int maxRes = max(
		cutRope(n-a, a, b, c), 
		max(cutRope(n-b, a, b, c), cutRope(n-c, a, b, c))
	);

	if(maxRes == -1) return -1;
	return maxRes + 1;
}

int main() 
{
	cout << cutRope(23, 2, 4, 6);
}
