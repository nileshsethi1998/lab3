#include <iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Enter a Number";
	cin>>x;

	if(x>0)
		cout<<"The number "<<x<< " is Positive ";
	else if(x<0)
		cout<<"The number "<<x<<" is Negative ";
	else
		cout<<"The number is Zero ";

	return 0;
}
