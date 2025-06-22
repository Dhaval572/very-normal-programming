// Print name in rainbow way
#include <iostream>
#include <windows.h>

// ( Only for hide cursor )
void setCursorVisibility(bool visible)
{
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hOut, &cursorInfo);
    cursorInfo.bVisible = visible;
    SetConsoleCursorInfo(hOut, &cursorInfo);
}

void rainbowText(const char *name)
{
    setCursorVisibility(false); 
    for (int depth = 0; depth < 255; depth++)
    {
        std::cout << "\033[38;5;" << depth << "m\r" << name ;
        Sleep(50);
    }
    setCursorVisibility(true); 
}

int main()
{
    rainbowText("I love c++");
    return 0;
}
