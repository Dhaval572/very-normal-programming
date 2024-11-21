// Making infinite loops
#include <iostream>
using namespace std;

int main()
{
	// make infinite loop using for loop
	for(;;)
	{
		cout << "For loop" << endl;
		break; 				               // To exit from infinite loop
	}

	// Make infinite loop using while loop
	while(true)
	{
		cout << "While loop" << endl;
		break; 				               // To exit from infinite loop
	}

	// Make infinite loop using do while loop
	do
	{
		cout << "do - while loop";
	}while(true);			               // To exit from infinite loop

	return 0;
}
/*
Explaination:

	In c++ you make three inifinite loops:

		1).	Using for loop 		( Line no. 07 )
		2).	Using while loop	( Line no. 14 )
		3).	Using do while loop	( Line no. 21 )

Uses of inifinite loops:

	1).	Server applications: Keep the server running to handle client requests.

	2).	Real-time data monitoring: Continuously collect sensor or system data.

	3).	GUI event loops: Wait for and respond to user input.

	4).	Game loops: Update game state and render frames indefinitely.

	5).	Background tasks: Run background processes like checks or updates.

*/
