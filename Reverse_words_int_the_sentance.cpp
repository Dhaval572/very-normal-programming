// Reverse word in the sentance
#include <iostream>
#include <vector>
using namespace std;

string reverseTheWord(string s)
{
	// Array to store words
	vector<string> wordContainer;
	string word;

	// Add words in wordContainer
	for (int i = 0; i < s.size(); i++)
	{
		if (s.at(i) == ' ')
		{
			// If we encounter a space, store the current word and reset the word container
			if (!word.empty())
			{
				wordContainer.push_back(word); // Adding word in the wordContainer
				word.clear();
			}
		}
		else
		{
			word += s.at(i); // Adding characters in the word
		}
	}

	// Don't forget to add the last word if there is one
	if(!word.empty())
	{
		wordContainer.push_back(word); 
	}

	// Returning the words of sentance
	string result = "";
	for(int i = wordContainer.size() - 1; i >= 0; --i)
	{
		result += wordContainer[i];	 

		if(i > 0)
			result += ' '; // Add spaces between words
	}

	return result;
}

int main()
{
	string s = "Hey, why are you annoying me?";
	cout << "Word reversed: " << reverseTheWord(s);
	return 0;
}
