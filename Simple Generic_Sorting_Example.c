// Generic example in c
#include <stdio.h>
#include <stdlib.h>

// Comparison function for integers
int cmpInt(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

// Comparison function for doubles
int cmpDouble(const void *a, const void *b)
{
	double diff = (*(double *)a - *(double *)b);
	return (diff > 0) - (diff < 0); // Returns 1, -1, or 0
}

int main()
{
	int intArr[] = {5, 2, 9, 1, 6};
	size_t intSize = sizeof(intArr) / sizeof(intArr[0]);

	double doubleArr[] = {3.5, 1.2, 4.8, 2.1};
	size_t doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

	// Sorting integers
	qsort(intArr, intSize, sizeof(int), cmpInt);
	
	printf("Sorted Integers: ");
	for (size_t i = 0; i < intSize; i++)
		printf("%d ", intArr[i]);

	printf("\n");

	// Sorting doubles
	qsort(doubleArr, doubleSize, sizeof(double), cmpDouble);

	printf("Sorted Doubles: ");
	for (size_t i = 0; i < doubleSize; i++)
		printf("%.1f ", doubleArr[i]);

	printf("\n");

	return 0;
}
