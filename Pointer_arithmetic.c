// Pointer Arithmetic
#include <stdio.h>

void pointer_arithmetic(int *arr, int size)
{
	// Efficient pointer-based traversal
	for (int *ptr = arr; ptr < arr + size; ptr++)
	{
		printf("%d ", *ptr);
	}
}

void indexing(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main() 
{
	int arr[3] = {1, 2, 4};

	printf("Traverse using pointer arithmetic: ");
	pointer_arithmetic(arr, 3);

	printf("\nTraverse using indexing: ");
	indexing(arr, 3);

	return 0; 
}
