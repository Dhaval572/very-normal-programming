// Count the number of digit
#include <iostream>
using namespace std;

void digitCount(int n)
{
    int count = 0; 
    // Loop will run untill n is not equal to 0
    while (n)
    {
        n = n / 10; // Deviding number by 10 until n != 0
        count++;    // Counting the number of digits
    }

    cout << count;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Number of digit of (" << n << ") is: ";
    digitCount(n);
    return 0;
}
