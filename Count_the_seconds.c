#include <stdio.h>
#include <windows.h>

void countdown(int seconds)
{
	while (seconds >= 0)
	{
		printf("\rTime remaining: %2d seconds", seconds);
		Sleep(1000); 
		seconds--;
	}
	printf("\rTime's up!                \n");
}

void main()
{
	countdown(10); 
}
