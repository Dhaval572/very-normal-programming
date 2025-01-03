// String using linked list
#include <iostream>
using namespace std;

class Node
{
public:
	char ch;
	Node *next;

	static void name(Node *currChar)
	{
		while(currChar != nullptr)
		{
			cout << currChar->ch;
			currChar = currChar->next;
		}
	}
};

int main()
{
	Node *ch1 = new Node;	
	Node *ch2 = new Node;	
	Node *ch3 = new Node;	
	Node *ch4 = new Node;	
	Node *ch5 = new Node;	
	Node *ch6 = new Node;	
	Node *ch7 = new Node;
	Node *ch8 = new Node;	

	ch1->ch = 'M';
	ch1->next = ch2;

	ch2->ch = 'a';
	ch2->next = ch3;

	ch3->ch = 'n';
	ch3->next = ch4;

	ch4->ch = 't';
	ch4->next = ch5;

	ch5->ch = 'h';
	ch5->next = ch6;

	ch6->ch = 'a';
	ch6->next = ch7;

	ch7->ch = 'n';
	ch7->next = ch8;

	ch8->ch = '\0';
	ch8->next = nullptr;

	Node::name(ch1);

	return 0;
}
