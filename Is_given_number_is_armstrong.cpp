// Find given number is armstrong or not
#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
	int sum = 0, originalNumber, remainder, digits = 0;
	originalNumber = n;

	// Find the number of digits
	while (n != 0)
	{
		n /= 10;
		digits++;
	}

	n = originalNumber; // Reset n to the original number

	// Calculate the sum of digits raised to the power of the number of digits
	while (n != 0)
	{
		remainder = n % 10; // Get the last digit
		int powerResult = 1;

		// Calculate power (remainder^digits) manually
		for (int i = 0; i < digits; i++)
		{
			powerResult *= remainder;
		}

		sum += powerResult; // Add to sum
		n /= 10;			// Remove the last digit
	}

	// Check if sum is equal to the original number
	return sum == originalNumber;
}

int main()
{
	int n;
	cout << "Enter the number: ";
	cin >> n;

	if (isArmstrong(n))
		cout << n << " is Armstrong";
	else
		cout << n << " is not Armstrong";

	return 0;
}

/*
Explaination:

	An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

	Example:

		153 is an Armstrong number:

			it has 3 digits.

			153 = 1^3 + 5^3 + 3^3
				= 1 + 125 + 27

	So, this was Armstrong programming
*/
