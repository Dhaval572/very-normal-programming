// Merging two arrays
#include <iostream>
using namespace std;

int main()
{
	// Input arrays
	int arr1[] = {1, 3, 5};
	int arr2[] = {2, 4, 6};

	// Size of each array
	int size1 = sizeof(arr1) / sizeof(int);
	int size2 = sizeof(arr2) / sizeof(int);

	// Creating new array which size if sum of arr1 and arr2
	int merged[size1 + size2];

	// Add elements from the first array
	for (int i = 0; i < size1; ++i)
	{
		merged[i] = arr1[i];
	}

	// Add elements from the second array
	for (int i = 0; i < size2; ++i)
	{
		merged[size1 + i] = arr2[i];
	}

	// Traverse the merged array
	for (int i = 0; i < size1 + size2; ++i)
	{
		cout << merged[i] << " ";
	}

	return 0;
}
/*

	Time complexity of merging is: 

		O(n + m)

		where n is size of first array and m is size of second array.

	Space complexity of merging is:

		O(n + m)

		Space complexity is also same as time complexity.

*/
