
#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout<<"Enter any Three Numbers";
	cin>>x>>y>>z;

	if(x>y && x>z)
		cout<<"The number "<<x<< " is greater ";
	else if(y>z && y>z)
		cout<<"The number "<<y<<" is greater ";
	else
		cout<<"The number "<<z<<" is greater ";

	return 0;
}
