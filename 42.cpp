#include<iostream>
using namespace std;

int main()
{
	int n,m,pw=1;

	cout << "enter a no. to find its power\n";
	cin>> n;

	cout << "enter the power of  " << n ;
	cin>> m;

	int i;
	for(i=1; i<=m; i++)
	{
		pw = pw*n ;
	}
	cout<< "the "<< m <<"th" << " power of " << n << "is: \n"<<pw ;
}
