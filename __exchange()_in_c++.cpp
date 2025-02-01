#include <iostream>
using namespace std;

int main()
{
    int a = 34;
    int oldA = __exchange(a, 40);
    cout << oldA;
    return 0;
}
