// Leaders in an array
#include <iostream>
using namespace std;

void findLeaders(int size, const int *arr)
{
    int maxFromRight = arr[size - 1]; // Last element is always leader
    cout << maxFromRight << ' ';

    // Traverse array from right to left
    for(int i = size - 2; i >= 0; i--)
    {
        if(arr[i] > maxFromRight)
        {
            maxFromRight = arr[i];
            cout << maxFromRight << " ";
        }
    }
    cout << endl;
}

int main()
{
    int size = 6;
    int arr[size] = {23, 37, 35, 56, 212, 44};
    findLeaders(size, arr); 

    return 0;
}
