// User defined random function
#include <iostream>
#include <time.h>
using namespace std;

int random(int min, int max)
{
	int randomNum = (min + rand() % (max - min + 1));
	return randomNum;
}

int main()
{
	srand(time(0));
	random(0, 10); // Will provide random numbers between 0 and 10
	random(10, 20); // Will provide random numbers between 10 and 20
	random(30, 40); // Will provide random numbers between 30 and 40
	random(40, 50); // Will provide random numbers between 40 to 50

	// For example: 
	cout << random(2, 7); // Will provide random numbers between 2 and 7
	return 0;
}
