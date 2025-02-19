// how to change the value of constant
#include <stdio.h>

void main()
{
	// Note: this trick works in only c language ( Not in c++ )
	const int a = 10;

	int *ptr = (int *)&a;
	*ptr = 20; // Now a is 20

	printf("A: %d" , a);
}
