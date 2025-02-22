#include <stdio.h>
#define PRINT_VALUE(var, num) printf("Value of " #var #num ": %d\n", var##num)

int main()
{
    int value11 = 200;  // Declare value11
    PRINT_VALUE(value1, 1);
    return 0;
}
