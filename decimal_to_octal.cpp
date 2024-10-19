// Decimal to Octal conversion
#include <iostream>
using namespace std;

void decimalToOctal(int n)
{
    int rem;
    int arr[100]; // For storing octal digits
    int i = 0;

    // Loop will run until n is not equal to 0
    while (n > 0)
    {
        rem = n % 8;  // Provides remainder
        n = n / 8;    // Updating the value of n
        arr[i] = rem; // Store remainder in arr
        i++;
    }

    // Print the remainder from the end
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }

    cout << endl; // New line for better formatting
}

int main()
{
    int n;
    cout << "Enter a non-negative decimal number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please enter a non-negative number." << endl;
        return 1; 
    }

    cout << "Decimal number (" << n << ") converted to Octal: ";
    decimalToOctal(n);

    return 0;
}
