// Sorting an array of 0s, 1s, and 2s
#include <iostream>
using namespace std;

void sort012(int arr[], int size)
{
    int low = 0, mid = 0, high = (size - 1);

    while (mid <= high)
    {
        // Set 0 at his position
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]); 
            low++;
            mid++;
        }

        // If arr[mid] is 1, it's already in the correct position, move mid forward
        else if (arr[mid] == 1) 
        {
            mid++; 
        }

        // If arr[mid] is 2, swap it with arr[high] and move high pointer backward
        else // arr[mid] == 2
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

// Prints elements of an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {2, 0, 1, 2, 0, 1, 1, 0, 2, 1, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    sort012(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}

/*
    Here, mid is the main pointer that traverses the array and processes each element

    It decides what action to take based on whether the element is 0, 1, or 2.

+---------+-------------------------------------------------------------+ 
| Pointer | Purpose                                                     | 
+---------+-------------------------------------------------------------+ 
|  low    | Marks boundary for `0s`, moves right when a `0` is placed.  | 
|  mid    | Main pointer, processes each element and moves forward.     | 
|  high   | Marks boundary for `2s`, moves left when a `2` is placed.   | 
+---------+-------------------------------------------------------------+ 

*/
