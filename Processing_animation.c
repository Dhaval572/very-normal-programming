// Processing animation
#include <stdio.h>
#include <windows.h>

void spinningWheel(int duration)
{
	const char spinChars[] = {'|', '/', '-', '\\'};
	int i = 0;
	while (duration > 0)
	{
		printf("\rProcessing... %c", spinChars[i]);
		i = (i + 1) % 4; // Cycle through the spin characters
		Sleep(100);		 
		duration -= 100;
	}
	printf("\rProcessing... Done!  \n");
}

void main()
{
	spinningWheel(5000); 
}
