// Writing the rhyme
#include <iostream>
#include <windows.h>
using namespace std; 

int main()
{
    string s = {"The sun is shining, bright and clear,\n"
            "The birds are singing, far and near.\n"
            "The sky is blue, the grass is green,\n"
            "A happier day you've never seen."};

    for(int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
        Sleep(100);
    }
    return 0;
}
