// Decimal to binary conversion
#include <iostream>
using namespace std;

void decimalToBinary(int n)
{
    int rem;
    int arr[10]; // For storing Binary bits
    int i = 0;

    // Loop will running until n is not equal to 0
    while(n)
    {
        rem = n % 2; // Provides remainder
        n = n / 2;   
        arr[i] = rem;
        i++;
    }

    // For print reminder from end
    for(int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
}

int main()
{
    int n;
    cout << "Enter the number in decimal: ";
    cin >> n;

    cout << "Decimal number (" << n << ") converted into Binary: ";
    decimalToBinary(n);

    return 0;
}
