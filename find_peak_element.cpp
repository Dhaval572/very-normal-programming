// Given an array nums[], find a peak element and return its index. A peak element is an element that is strictly greater than its neighbors. ( it's left and right elements )
#include <iostream>
using namespace std;

// Time complexity O(n) Mostly used for small size array
int findPeakElement_1(int *nums, int size)
{
    for (int i = 0; i < size; i++)
    {
        if ((i == 0 || nums[i] > nums[i - 1]) &&
            (i == size - 1 || nums[i] > nums[i + 1]))
        {
            return i;
        }
    }
    return -1;
}

// Time complexity O(log n) Mostly used for large size array
int findPeakElement_2(int *nums, int size)
{
    int left = 0, right = size - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[mid + 1])
            right = mid;
        else 
            left = mid + 1;
    }
    return left;
}

int main()
{
    int nums[] = {1, 2, 1, 3, 5, 6, 4};
    int size = sizeof(nums) / sizeof(nums[0]); 

    // ( Note: Both functions are correct—they just return different valid peaks because the array has more than one peak. )
    cout << "( func1 )Peak Index: " << findPeakElement_1(nums, size) << endl;
    cout << "( func2 )Peak Index: " << findPeakElement_2(nums, size) << endl;

    return 0;
}
