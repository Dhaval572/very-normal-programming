// Prevent the function call 
#include <stdio.h>
#pragma GCC poison printf
// ( Note: also works for main function ) 

void main()
{
	printf("");
}
