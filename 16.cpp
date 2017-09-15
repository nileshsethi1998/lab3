#include <iostream>
using namespace std;

int main()
{

    float aside, bside, cside;

    cout<<"enter the length of side a "<<endl;
    cin>>aside;

    cout<<"enter the length of side b "<<endl;
    cin>>bside;

    cout<<"enter the length of side c "<<endl;
    cin>>cside;


if(aside==bside && bside==cside)
   cout << "Equilateral triangle\n";


else if(aside==bside || aside==cside || bside==cside)

   cout << "Isosceles triangle\n";

else
   cout << "Scalene triangle\n";
}
