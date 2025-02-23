// Find the missing number
#include <iostream>
using namespace std;

// Using sum Formula  ( Time Complexity O(1) )
int findMissingNumber1(int *arr, int n)
{
    int N = n + 1; // Because one number is missing
    int totalSum = (N * (N + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++)
        actualSum += arr[i];

    return totalSum - actualSum;
}

// Using xor method ( Time Complexity O(n) ) ( best for large numbers )
int findMissingNumber2(int *arr, int n)
{
    int xor1 = 0, xor2 = 0;

    // XOR all numbers from 1 to N
    for (int i = 1; i <= n + 1; i++)
        xor1 ^= i;

    // XOR all elements in the array
    for (int i = 0; i < n; i++)
        xor2 ^= arr[i];

    return xor1 ^ xor2;
}

// Using binary search if elements are sorted ( Time complexity O(n log(n)) )
int findMissingNumber3(int arr[], int n)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        // Check if the missing number is on the left side
        if (arr[mid] != mid + 1)
            right = mid;
        else
            left = mid + 1;
    }

    // The missing number is at index 'left'
    return left + 1;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "( func1 ) Missing number: " << findMissingNumber1(arr, size) << endl;
    cout << "( func2 ) Missing number: " << findMissingNumber2(arr, size) << endl;
    cout << "( func3 ) Missing number: " << findMissingNumber3(arr, size) << endl;

    return 0;
}
