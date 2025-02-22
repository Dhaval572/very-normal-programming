// Random string generator
#include <stdio.h>
#include <windows.h>
#include <time.h>

void matrixEffect(int duration)
{
	srand(time(NULL)); 
	while (duration > 0)
	{
		for (int i = 0; i < 10; i++)
		{
			printf("%c", (rand() % 26) + 'A'); // Print random uppercase letters
		}
		printf("\n");
		Sleep(100); 
		duration -= 100;
	}
}

void main()
{
	matrixEffect(2000); 
}
