#include <iostream>
using namespace std;

int main() {
	int i=1;
	int n;
	int sum=0;


	cout<<"Enter the value of n";
	cin>>n;

while(i<=n)
	{

	  sum=(sum+i);
	  i=(i+2);

	}
    cout<<sum;

	return 0;
}
