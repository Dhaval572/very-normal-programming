// Convert string to integer
#include <iostream>
#include <climits> 
#include <cctype>  

using namespace std;

class Solution
{
public:
    int myAtoi(const string &s)
    {
        int i = 0, n = s.size();
        long result = 0;
        bool isNegative = false;

        // Ignore leading whitespace using std::isspace
        while (i < n && isspace(s[i]))
            i++;

        // Check for sign
        if (i < n && (s[i] == '+' || s[i] == '-'))
        {
            isNegative = (s[i] == '-');
            i++;
        }

        // Convert digits efficiently
        while (i < n && isdigit(s[i]))
        {
            result = result * 10 + (s[i] - '0');

            if (!isNegative && result > INT_MAX)
                return INT_MAX;
            if (isNegative && -result < INT_MIN)
                return INT_MIN;
            i++;
        }

        return isNegative ? -result : result;
    }
};

int main()
{
    Solution solution;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Converted Integer: " << solution.myAtoi(s) << endl;
    return 0;
}
