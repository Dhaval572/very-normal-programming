// Macros for Generic Functions
#include <stdio.h>

#define SWAP(a, b, type) \
	do                   \
	{                    \
		type temp = a;   \
		a = b;           \
		b = temp;        \
	} while (0)

int main()
{
	// For int
	int x = 5, y = 10;
	SWAP(x, y, int);
	printf("x = %d, y = %d\n", x, y);

	// For double
	double a = 3.5, b = 7.2;
	SWAP(a, b, double);
	printf("a = %.1f, b = %.1f\n", a, b);

	return 0;
}
