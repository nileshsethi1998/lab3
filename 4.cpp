#include <iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Enter a Number";
	cin>>x;

	if(x%5==0 && x%11==0)
		cout<<"The number "<<x<< " is divisible by 5 and 11 ";
	else
		cout<<"The number "<<x<<" is not divisible  ";


	return 0;
}

