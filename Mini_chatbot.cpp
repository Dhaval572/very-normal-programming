// Mini chatbot
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    string s = {"What is your name? \n"};

    for(char c : s)
    {
        cout << c;
        Sleep(100);
    }

    string you;
    cin >> you;

    s.clear();
    s = "Hello, "+ you +"! How are you?\n";

    for(char c : s)
    {
        cout << c;
        Sleep(100);
    }

    cin.ignore(); // Clear previous input
    getline(cin, you); // Take input

    if(you == "I am fine" || you == "fine" || you == "Fine")
        s = "Good!\n";
    else if(you == "Not fine" || you == "not fine")
        s = "Oh sorry 😔, take care!";
    else 
        s = "Ok bye! Have a good day";

    for (char c : s)
    {
        cout << c;
        Sleep(150);
    }

    return 0;
}
