// Print sum of 1 to nth natural number in two ways
#include <iostream>
using namespace std;

// In this algorithm, sum will be done in Linear time means it's time complexity is O(n)
void sumInLinearTime(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum using Linear time rinning algorithm:\n";
    printf("Sum of 1 to %d is: %d\n",n,sum);
    cout << endl;
}

// In this algorithm, sum will be done in Constant time means it's time complexity is O(1)
void sumInConstantTime(int n)
{
    int sum = ((n*n + n) / 2); // It is mathemetical formula
    cout << "Sum using Constant time running algorithm:\n";
    printf("Sum of 1 to %d is: %d\n",n,sum);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    sumInLinearTime(n);
    sumInConstantTime(n);
    return 0;
}

/*
Explaination of mathemetical formula of sum:

    Comming soon 😉
*/
