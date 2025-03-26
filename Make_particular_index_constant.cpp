// Use tuple to make constant particular index's element
#include <tuple>
#include <iostream>
using namespace std;

int main()
{
    tuple<int, const int, int, const int, int> arr(10, 20, 30, 40, 50);

    get<0>(arr) = 100; // OK
    get<2>(arr) = 300; // OK
    // get<1>(arr) = 200;  // ERROR: assignment to const element
    // get<3>(arr) = 400;  // ERROR: assignment to const element

    cout << get<1>(arr) << " " << get<3>(arr) << endl;
}
