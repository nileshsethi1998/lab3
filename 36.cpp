#include<iostream>
using namespace std;

int main()
{
    int val, num, mul = 1;

    cout << "Enter the number : ";
    cin >> val;
    num = val;
    while (num != 0)
    {
        mul = mul * (num % 10);
        num = num / 10;
    }
    cout << "The mul of the digits of "
         << val << " is " << mul;
}
