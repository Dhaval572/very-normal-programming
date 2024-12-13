// Sum of even elements in an array
#include <iostream>
using namespace std;

int sumOfEven(int size, int *arr)
{
	int i, sum = 0; // Initialize sum with 0

	// For loop to check each element
	for(int i = 0; i < size; i++)
	{
		// Check for even number
		if(arr[i] % 2 == 0)
		{
			sum += arr[i]; // If current element is even than add it to sum
		}
	}

	return sum; // Return the sum
}

int main()
{
	int arr[] = {2, 4, 4, 2, 3, 5};
	int size = sizeof(arr) / sizeof(int);
	cout << sumOfEven(size, arr);
	return 0;
}
