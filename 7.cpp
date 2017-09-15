#include <iostream>
using namespace std;

int main()
{
	char x;
	cout<<"Enter an Alphabet";
	cin>>x;

	if((x>='a' && x<='z') || (x>='A' && x<='Z'))
		cout<<"The Character is an Alphabet  ";
	else
		cout<<"The Character is not an Alphabet  ";


	return 0;
}

