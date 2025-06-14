// Random palindrome string generator
#include <iostream>
#include <array>
#include <random>
using namespace std;

string palindromeGenerator(int size)
{
    srand(time(0));
    array<char, 26> charSet =
        {
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
            'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    uint8_t firstIdx = rand() % 26;
    uint8_t middleIdx = rand() % 26;
    uint8_t LastIdx = rand() % 26;
    switch (size)
    {
    case 1:
    {
        return string(1, charSet.at(firstIdx));
    }

    case 2:
    {
        return string(2, charSet.at(firstIdx));
    }

    case 3:
    {
        string first = string(1, charSet.at(firstIdx));
        return first + string(1, charSet.at(middleIdx)) + first;
    }

    case 4:
    {
        string start = string(1, charSet.at(firstIdx));
        return start + string(2, charSet.at(middleIdx)) + start;
    }

    case 5:
    {
        string first = string(1, charSet.at(firstIdx));
        string second = string(1, charSet.at(middleIdx));
        return first + second + string(1, charSet.at(LastIdx)) + second + first;
    }

    default:
        return "Invalid Size\nPlease enter between 1 to 5";
    }
}

int main()
{
    int size;
    cout << "Enter the size of string: ( Between 1 to 5 ): ";
    cin >> size;
    cout << palindromeGenerator(size);

    return 0;
}
