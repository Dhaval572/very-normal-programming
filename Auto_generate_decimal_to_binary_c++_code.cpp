// Automatically Generate C++ Code for Decimal to Binary Conversion
#include <iostream>
#include <windows.h>
using namespace std;

inline void typingCode(const string &s)
{
    for (char c : s)
    {
        cout << c;
        Sleep(50); // Typing speed
    }
}

void printIncludes()
{
    string firstLine = "#include <iostream>\n";
    typingCode(firstLine);
}

void printNamespace()
{
    string thirdLine = "using namespace std;\n\n";
    typingCode(thirdLine);
}

void printMainFunction()
{
    string mainFunc =
        "int main()\n"
        "{\n"
        "    int n;\n"
        "    cout << \"Enter the number in decimal: \";\n"
        "    cin >> n;\n\n";
    typingCode(mainFunc);
}

void printDecimalToBinaryCode()
{
    string decimalToBinaryCode =
        "    int rem;\n"
        "    int arr[10];\n"
        "    int i = 0;\n\n"
        "    while (n)\n"
        "    {\n"
        "        rem = n % 2;\n"
        "        n = n / 2;\n"
        "        arr[i] = rem;\n"
        "        i++;\n"
        "    }\n\n"
        "    cout << \"Decimal number converted into Binary: \";\n"
        "    for (int j = i - 1; j >= 0; j--)\n"
        "    {\n"
        "        cout << arr[j];\n"
        "    }\n\n";
    typingCode(decimalToBinaryCode);
}

void printEndMain()
{
    string endMain =
        "    return 0;\n"
        "}\n";
    typingCode(endMain);
}

int main()
{
    printIncludes();
    printNamespace();
    printMainFunction();
    printDecimalToBinaryCode();
    printEndMain();

    return 0;
}
