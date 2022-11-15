#include <iostream>
using namespace std;

int main( )
{
	int a[7] = {10, 20, 30};
	int *aPtr, *bPtr;
	
	aPtr = a;			
	bPtr = &a[2];      
	
	cout << "The address of array a is " << a << "\n"
		 << "The address of element a[0] is " << &a[0] << endl;
	cout << "The value of aPtr is " << aPtr << "\n"
		 << "The value of bPtr is " << bPtr << endl;
	cout << "The value of aPtr[4] is " << aPtr[4] << endl;
	cout << "The value of bPtr[1] is " << bPtr[1] << endl;
	cout << "The sum of aPrt[4] + bPrt[1] = " << aPtr[4] + bPtr[1];  
}
