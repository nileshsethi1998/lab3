#include <iostream>
using namespace std;

int main()
{
    int n, reversedNumber = 0, remainder,b;

    cout << "Enter an integer: ";
    cin >> n;
    b=n;
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n = n/10;
    }

    cout << "Reversed Number : " << reversedNumber;

    if(reversedNumber==b)
    { cout<< "\nentered no"<< b <<"is palindrome";  }
    else
    { cout<< "\nentered no"<< b <<"is palindrome";  }

    return 0;
}
