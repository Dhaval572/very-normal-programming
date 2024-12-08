// Drawing pattern using emoji😁
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    // Set the input and output code pages to UTF-8
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

	for(int i = 0; i < 5; i++)
	{
		for(int j = i; j < 5; j++)
		{
			cout << "💜";
		}

		cout << endl;
	}

    return 0;
}
