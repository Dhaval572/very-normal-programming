// Typing the code automatically
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
    string firstLine = "#include <iostream>\n";
    string secondLine = "using namespace std;\n";
    string thirdLine = "\n\nint main()";
    string fourthLine = "\n{\n\tcout << \"Hello world!\";\n";
    string fifthLine = "\treturn 0;\n}";

    typing(firstLine);
    typing(secondLine);
    typing(thirdLine);
    typing(fourthLine);
    typing(fifthLine);

    return 0;
}
