#include <iostream>
using namespace std;
int main( )
{
int i,num=0, *p/*=NULL*/;
cout << "Please enter the number of elements: ";
cin >> num;
p = new int[num]; 
for (i=0;i<num;i++)
{
cout << "Element " << i << ": ";
cin >> p[i]; 
}
for (i=0;i<num;i++) cout <<"\nSquare of "<<p[i]<<" is " <<p[i]*p[i];
delete [] p;
}
