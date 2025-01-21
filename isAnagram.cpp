// Check that given string is anagram or not
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Time complexity: O(n log(n) )
bool method1(string str1, string str2)
{
    // If the lengths are not the same, they cannot be anagrams
    if (str1.length() != str2.length())
        return false;

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return str1 == str2;
}

int main()
{
    string str1, str2;

    // Example of anagrams is: listen, silent
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (method1(str1, str2))
    {
        cout << "The strings are anagrams." << endl;
    }
    else
    {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
