#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	else
		return gcd(b % a, a);	
}

int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;

	cout << "Greatest common devider: " << gcd(a, b);
	return 0;
}
