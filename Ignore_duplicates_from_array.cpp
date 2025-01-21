// Ignore duplicates
#include <iostream>
#include <array>
#include <set>
using namespace std;

void uniqueArr(array<int, 5> arr)
{
    set<int> uniqueSet;

    for(int val : arr)
        uniqueSet.insert(val); // Will only take unique elements (Doesn't allow duplicates)

    cout << "Unique elements: ";
    for(int val : uniqueSet)
        cout << val << ' ';

}

int main()
{
    array<int, 5> arr = {1, 2, 2, 3, 3};
    uniqueArr(arr);
    return 0;
}
