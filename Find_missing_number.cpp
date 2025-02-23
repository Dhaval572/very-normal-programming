// Find the missing number
#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n)
{
    int N = n + 1;                    // Because one number is missing
    int totalSum = (N * (N + 1)) / 2; 
    int actualSum = 0;

    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    return totalSum - actualSum;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};                
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing number: " << findMissingNumber(arr, size) << endl;

    return 0;
}
