// Count the number of argumnets
#include <stdio.h>
#include <stdarg.h>

int count_args(int num_args, ...)
{
	va_list args;
	va_start(args, num_args);

	int count = 0; // To count number of arguments
	for (size_t i = 0; i < num_args; i++)
	{
		va_arg(args, int); // Accessing each arguments;
		count++;
	}

	va_end(args);
	return count;
}

void main()
{
	int number_of_args = 4;	
	printf("Number of argumnets: %d", count_args(number_of_args, 1, 2, 3, 5));
}
