#include <iostream>
using namespace std;

void toh(int n, char start, char end, char support) 
{
	if(n==1) 
	{
		cout << start << " --> " << end << endl;
		return;
	}
	// move n-1 from start to support using end as middleman
	toh(n-1, start, support, end);

	// move the nth disk from start to end.
	cout << start << " --> " << end << endl;

	// now move the n-1 from support to end using start as middleman
	toh(n-1, support, end, start);
}

int main() 
{
	toh(3, 'A', 'C', 'B');
}
