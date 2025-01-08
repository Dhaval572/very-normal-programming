// Best use of left shift operator
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int n = 3;

    // Left shift equivalent to x * 2^n
    int result = x << n;  // x << 3 is the same as x * 8
    cout << x << " multiplied by 2^" << n << " is " << result << endl;

    return 0;
}
