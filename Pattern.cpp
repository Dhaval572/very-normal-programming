// Pattern program
#include <iostream>
using namespace std;

int main()
{
	char ch = 'A';
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 1; j <= i; j++){
			cout << ch << ' ';
		}
		ch++;
		cout << endl;
	}
	return 0;
}
/*
Output: 

A         
B B       
C C C     
D D D D   
E E E E E
*/
