// Mini chatbot
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void autoTyping(string str, int delay)
{
    for(char c : str)
    {
        cout << c;
        Sleep(delay);
    }
}

int main()
{
    string s = {"What is your name? \n"};
    autoTyping(s, 100);

    string you;
    cin >> you;

    s = "Hello, "+ you +"! How are you?\n";
    autoTyping(s, 100);

    cin.ignore(); // Clear previous input
    getline(cin, you); // Take input

    if(you == "I am fine" || you == "fine" || you == "Fine")
        s = "Good!\n";
    else if(you == "Not fine" || you == "not fine")
        s = "Oh sorry 😔, take care!";
    else 
        s = "Ok bye! Have a good day";

    autoTyping(s, 150);

    return 0;
}
