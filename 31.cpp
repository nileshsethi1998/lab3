#include <iostream>
using namespace std;

int main() {
	int i,count=0;


	cout<<"Enter the digits";
	cin>>i;

while(i>0)
	{
	i=i/10;

	count++;


	}
    cout<<"The Number of Digits are :"<<count;

	return 0;
}
