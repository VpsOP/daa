#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int currentIndex = 0) 
{
	if(currentIndex > (int)(str.size()/2)) return true;
	return
		str[currentIndex] == str[str.size() - currentIndex - 1]
		&& isPalindrome(str, currentIndex+1);
}

int main() 
{
	cout << isPalindrome("123211");
}
