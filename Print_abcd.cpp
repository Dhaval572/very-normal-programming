// Print abcd in c++
#include <iostream>
using namespace std;

int main()
{
	char currentChar = 'a';
	while(currentChar != 'z')
	{
		cout << currentChar << ' ';
		currentChar++;
	}
	return 0;
}
