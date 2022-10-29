#include <iostream>
using namespace std;

void rotate(int&, int&);
void rotate(int, int&, int);

int main( )
{
	int a, b, c, d;
	a = 1; b = 2; 
	rotate(a, b);
	cout << "a=" << a << " b=" << b << endl;
	
	a = 1; b = 2; c = 3; 
	rotate(a, b, c); // a and c do not change its values in the main function, but b change.
	cout << "a=" << a << " b=" << b << " c=" << c << endl;
	cout << a + b + c;
}

void rotate(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void rotate(int a, int& b, int c) // int &b = b;
{
	int temp;
	temp = a;
	a = b;
	b = c;
	c = temp;
	//cout << a << " " << b << " " << c << endl;
}
