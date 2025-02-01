#include <iostream>
using namespace std;

int main()
{
    int a = 34;
    int oldA = __exchange(a, 40);
    cout << oldA;
    return 0;
}
/*
    __exchange() is a compiler-specific function that replaces the value of a variable with a new value and returns the old value. It is typically used for low-level optimizations or in specific environments where standard library functions like std::exchange are not available.
*/
