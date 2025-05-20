#include <stdio.h>

// Brian Kernighan’s Algorithm
int countSetBits(int num)
{
	int count = 0;
	while (num != 0)
	{
		num = num & (num - 1); 
		count++;
	}
	return count;
}

void main()
{
	// Binary of 23 is 10111 so bit count is 41
	printf("Number of bits in this: %d", countSetBits(23));
}
