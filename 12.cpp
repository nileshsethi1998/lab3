
#include <iostream>
using namespace std;

int main()
{
	int m;

	cout<<"Enter the Month Number (1-12)";
	cin>>m;
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 ||m==12 ){
			cout<<"31";}
	else if (m==2){
			cout<<"28";}
	else {
		    cout<<"30";}

	}

