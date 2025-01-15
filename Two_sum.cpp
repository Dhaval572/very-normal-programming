// Given an array of integers nums and a target integer, return the indices of the two numbers that add up to the target.
#include <iostream>
using namespace std;

void solution(int target, int *arr, int size)
{

    for(int i = 0; i < (size - 1); i++)
    {
        // Compare every pair 
        for(int j = i + 1; j < (size - 1); j++)
        {
            if(arr[i] + arr[j] == target)
                cout << "( " << i << ", " << j << " )" << endl;
        }
    }
}

int main()
{
    int nums[5] = {4,5,6,9,45};
    int target = 14;
    solution(target, nums, 5);
    return 0;
}
