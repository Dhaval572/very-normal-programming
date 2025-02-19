#include <iostream>
using namespace std;

void swap1(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

void swap2(int &a, int &b)
{
    a ^= b, b ^= a, a ^= b;
}

void swap3(int &a, int &b)
{
    a = a + b - (b = a);
}

void swap4(int &a, int &b)
{
    int tempVar = a;
    a = b;
    b = tempVar;
}

void swap5(int &a, int &b)
{
    a = a * b;
    b = a / b;
    a = a / b;
}

void swap6(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a = 10, b = 20;
    
    int a1 = a, b1 = b;
    swap1(a1, b1);
    cout << "Swap using swap1: " << "a1 = " << a1 << " b1 = " << b1 << endl;

    int a2 = a, b2 = b;
    swap2(a2, b2);
    cout << "Swap using swap2: " << "a2 = " << a2 << " b2 = " << b2 << endl;

    int a3 = a, b3 = b;
    swap3(a3, b3);
    cout << "Swap using swap3: " << "a3 = " << a3 << " b3 = " << b3 << endl;

    int a4 = a, b4 = b;
    swap4(a4, b4);
    cout << "Swap using swap4: " << "a4 = " << a4 << " b4 = " << b4 << endl;

    int a5 = a, b5 = b;
    swap5(a5, b5);
    cout << "Swap using swap5: " << "a5 = " << a5 << " b5 = " << b5 << endl;

    int a6 = a, b6 = b;
    swap5(a6, b6);
    cout << "Swap using swap5: " << "a6 = " << a5 << " b6 = " << b5 << endl;

    return 0;
}
