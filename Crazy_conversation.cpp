// Conversation with teacher
#include <iostream>
#include <windows.h>
using namespace std;

void typing(const string &s)  
{
    for (char c : s)
    {
        cout << c;
        Sleep(100);
    }
}

int main()
{
    string teacher = "Teacher: Why you and your friend talking with each other in my lecture\n";
    typing(teacher);

    string me = "Me: Ab to aadat si he mujko ese jine me";
    typing(me);

    return 0;
}
