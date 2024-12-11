// Static variable explaination
#include <iostream>
using namespace std;

void staticVar()
{
	static int i = 0; // This will execute for only first function call 
	i++;
	cout << "i = " << i << endl;
}

void normalVar()
{
	int i = 0; 		 // This line will execute for all function calls
	i++;
	cout << "i = " << i << endl;
}

int main()
{
	cout << "If i is static variable then:\n";
	// Calling staticVar fucntion for multitime;
	staticVar(); 
	staticVar();
	staticVar();
	staticVar();
	staticVar();

	cout << "If i is normal variable then:\n";
	// Calling normalVar fucntion for multitime;
	normalVar();
	normalVar();
	normalVar();
	normalVar();
	normalVar();

	return 0;
}
/*
Static variable: 

	A static variable is a variable that retains its value between function calls and is initialized only once during the program's execution.

	In my example, for staticVar function, the value of i will increases when function calls.

	Means for function call 1.

		i will be increment by 1 so i = 1;

	Means for function call 2.

		i will be increment by 1 so i = 2;
	
	Means for function call 3.

		i will be increment by 1 so i = 3;

	Means for function call 4.

		i will be increment by 1 so i = 4;

	Means for function call 5.

		i will be increment by 1 so i = 5;

	Means each function call, value of i will be static.

	I hope you understand!!
*/
