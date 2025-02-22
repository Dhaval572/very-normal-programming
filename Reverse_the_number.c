#include <stdio.h>

int main()
{
	int num, reversed = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (num != 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10; // Update the number
	}

	printf("Reversed number: %d\n", reversed);
	return 0;
}
