// Number of digit count in one line
#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n; 

    if (n == 0)
    {
        cout << "Number of digits: 1" << endl; 
    }
    else
    {
        int digits = log10(abs(n)) + 1; // abs() to handle negative numbers
        cout << "Number of digits: " << digits << endl;
    }

    return 0;
}
