// Ingnoring duplicate elements in array
#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {1, 7, 4, 6, 5, 6, 7, 7}; // Initialization of array
    int uniqueArr[8];                      // Temporary array for unique elements
    int uniqueCount = 0;                   // Index of uniqueArr
    bool isDuplicate;                      

    for (int i = 0; i < 8; i++)
    {
        // Check if the element is already in uniqueArr
        for (int j = 0; j < uniqueCount; j++)
        {
            if (arr[i] == uniqueArr[j]) // Checking each elements 
            {
                isDuplicate = true; 
                break;
            }
        }

        // If it's not a duplicate than add it to uniqueArr
        if (!isDuplicate) // it means If isDuplicate is false
        {
            uniqueArr[uniqueCount++] = arr[i];
        }
    }

    // Printing Unique array which ignores duplicate values
    cout << "After removing duplicate values\nelements of array: ";
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << uniqueArr[i] << ' ';
    }
    cout << endl;

    return 0;
}
