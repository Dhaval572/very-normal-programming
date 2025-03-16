// Use of pointers
#include <stdio.h>

void main()
{
	int a = 40;
	int *b = &a;

	// You can modify the acctual value of a by pointer
	printf("Before change in *b: a = %d", a);
	*b = 67;
	printf("\nAfter modifying: a = %d", a);

	// It can't work for normal variable:
	int c = a;
	c = 50;

	printf("\nYou can see that a is as it is: %d", a);

	// So, you can easily modify a variable's value using pointers because a pointer stores the memory address of a variable.
}
