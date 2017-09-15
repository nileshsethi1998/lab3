#include <iostream>
using namespace std;

int main()
{
	char x;
	cout<<"Enter an Alphabet";
	cin>>x;

	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
		cout<<"The Alphabet is a Vowel  ";
	else
		cout<<"The Alphabet is a Consonant   ";


	return 0;
}
