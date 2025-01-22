// Implement power function
#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    int power = 1;

    for(int i = 0; i < exponent; i++)
    {
        power *= base; 
    }

    return power;
}

int main()
{
    int a = 2, b = 5;
    cout << a << "^" << b << " = " << power(a, b);
    
    return 0;
}
