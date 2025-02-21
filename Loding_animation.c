#include <stdio.h>
#include <windows.h>

void loding()
{
	printf("[----------] 0%%");
	for (int i = 0; i < 10; i++)
	{
		Sleep(150);
		printf("\r[");

		// Will print # for 10 time
		for (int j = 0; j <= i; j++)
			printf("#");

		for (int j = i + 1; j < 10; j++)
			printf("-");

		// (i + 1) * 10 for increase % by 10%
		printf("] %d%%", (i + 1) * 10); // Note: %% is used to display '%' symbol
	}
}

void main()
{
	loding();
}
