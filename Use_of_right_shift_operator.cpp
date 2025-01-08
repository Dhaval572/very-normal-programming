// best use of right shift
#include <iostream>
using namespace std;

int main()
{
	int x = 40;
	int n = 3;

	// Right shift equivalent to x / 2^n
	int result = x >> n; // x >> 3 is the same as x / 8
	cout << x << " divided by 2^" << n << " is " << result << endl;

	return 0;
}
