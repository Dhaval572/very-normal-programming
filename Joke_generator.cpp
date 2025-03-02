// Something like joke
#include <iostream>
#include <windows.h>
using namespace std;

void typing(const string &s)  
{
    for (char c : s)
    {
        cout << c;
        Sleep(50);  
    }
    cout << endl;
}

int main()
{
    typing("C++ vs Java: The Ultimate Battle");
    typing("Java: Hey C++ lets race to print Hello World on the screen");
    typing("C++: Alright ready when you are");
    typing("( Race starts )\n");
    typing("C++: Compiles optimizes executes instantly Hello World");
    typing("Java: Starts JVM loads classes initializes objects does garbage collection");
    typing("C++: Dude I finished 10 minutes ago What are you doing");
    typing("Java: Hold on I am just warming up the JVM");

    return 0;
}
