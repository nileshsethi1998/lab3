#include <iostream>
using namespace std;

int main()
{
	char x;
	cout<<"Enter a Character";
	cin>>x;

	if(x>='A' && x<='Z')
		cout<<"The Character is Upper Case  ";
	else if (x>='a' && x<='z')
		cout<<"The Character is a Lower Case  ";
	else
		cout<<"It is a different Character";


	return 0;
}
