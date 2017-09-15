#include <iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Enter a Number";
	cin>>x;

	if(x%2==0 && x%4==0)
		cout<<"The year is a leap year  ";
	else
		cout<<"The year is not a leap year   ";


	return 0;
}
