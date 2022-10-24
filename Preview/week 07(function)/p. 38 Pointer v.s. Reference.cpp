#include <iostream>
using namespace std;

void cubeByReference(int *);

int main( )
{
	int number = 5;
	cout << "Old value is " << number << endl;
	cubeByReference(&number);
	cout << "New value is " << number << endl;
	return 0;
}

void cubeByReference(int *nPtr)   // int *nPtr = &number;
{
	*nPtr = *nPtr * *nPtr * *nPtr; // *nPtr == pow(*nPtr, 3);
}
