// Check which key is pressed 
#include <iostream>
#include <conio.h> // To use getch()
using namespace std;

int main()
{
    cout << "Press any key: ( q to quit )";

    // Infinite loop which can stop when breck statement executes
    while(true)
    {
        if(_kbhit()) // Check if a key was pressed
        {
            char key = getch(); // Getting the key
            if(key == 'q')
            {
                break; // Exit to loop 
            }

            cout << "\nYou pressed: " << key << endl;
        }
    }

    return 0;
}
// ( Note: this works only on alphanumeric )
