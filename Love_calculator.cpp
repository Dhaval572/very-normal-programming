// Love calculator
#include <iostream>
#include <string>
using namespace std;

int calculateLove(const string &name1, const string &name2)
{
	int sum = 0;

	for (size_t i = 0; i < name1.size(); ++i)
		sum += name1[i];

	for (size_t i = 0; i < name2.size(); ++i)
		sum += name2[i];

	return sum % 101;
}

int main()
{
	string name1, name2;

	cout << "Enter the first name: ";
	getline(cin, name1); 

	cout << "Enter the second name: ";
	getline(cin, name2);

	int lovePercentage = calculateLove(name1, name2);

	cout << "\nThe love percentage between " << name1 << " and " << name2 << " is: "
		 << lovePercentage << "%" << endl;

	return 0;
}
