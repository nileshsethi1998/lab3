#include<iostream>
using namespace std;

int main()
{
   int value,i,n,m;
   cout <<"Enter the multiplication number and limit of multiplication ";
   cin>>m>>n;

   i = 1;
   while ( i <= n )
   {
      value = m * i;
      cout << m << " * " << i << " = " << value <<"\n";
      i++;
   }
   return 0;
}
