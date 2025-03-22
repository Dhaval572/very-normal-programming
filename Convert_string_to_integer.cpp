#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long result = 0;
        bool isNegative = false;

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            isNegative = (s[i] == '-');
            i++;
        }

        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            i++;

            if (!isNegative && result > INT_MAX) return INT_MAX;
            if (isNegative && -result < INT_MIN) return INT_MIN;
        }

        return isNegative ? -result : result;
    }
};

int main() {
    Solution solution;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int result = solution.myAtoi(s);
    cout << "Converted Integer: " << result << endl;

    return 0;
}
