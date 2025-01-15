// Given an array of integers nums and a target integer, return the indices of the two numbers that add up to the target.
#include <iostream>
#include <unordered_map>
using namespace std;

// Easy but high time complexity O(n^2)
void solution_1(int target, int *arr, int size)
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

// Low time complexity O(n)
void solution_2(int target, int *arr, int size)
{
    unordered_map<int, int> map;    
    for (int i = 0; i < size; i++)
    {
        int complement = target - arr[i];       // Finds the complement
        
        if (map.find(complement) != map.end()) 
        {
            cout << "( " << map[complement] << ", " << i << " )" << endl; 
            return; 
        }
        map[arr[i]] = i;                        // Store the current number and its index
    }
}

int main()
{
    int nums[5] = {4,5,6,9,45};
    int target = 14;
    // solution_1(target, nums, 5);
    solution_2(target, nums, 5);
    return 0;
}
