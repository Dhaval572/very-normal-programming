// Reverse the number
#include <iostream>
using namespace std;

int reverseTheNumber(int num)
{
    int digit, reverse = 0;
    while(num != 0)
    {
        digit = num % 10; // Gives last digit
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return reverse;
}

int main()
{
    cout << reverseTheNumber(123);
    return 0;
}
