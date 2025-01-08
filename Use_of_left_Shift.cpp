// use of left shift
#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	int n = 10;

	// Multiply x by powers of 2 using left shift
	for (int i = 1; i <= n; i++)
	{
		x = x << 1; // This is equivalent to x = x * 2;
		cout << "5 multiplied by 2^" << i << " is " << x << endl;
	}

	return 0;
}
