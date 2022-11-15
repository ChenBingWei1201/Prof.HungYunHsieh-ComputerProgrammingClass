#include <iostream>
using namespace std;
int& max(int& n1, int& n2); // the fucn. max() returns a reference to a variable, instead of return a value.
int& min(int& n1, int& n2);
int main()
{
	int x = 3, y = 2;
	max(x , y) = 5;
	cout << "x=" << x << ", y=" << y << " " << x + y << endl; // the bigger one will be 5;
	min(x, y) = 10;
	cout << "x=" << x << ", y=" << y << " " << x + y << endl; // the smaller one will be 10;
	max(x, y) = 8;
	cout << "x=" << x << ", y=" << y << " " << x + y << endl; // the bigger one will be 8;
}

int& max(int& n1, int& n2)  // int &n1 = x; int &n2 = y;
{
	if (n1 > n2) 
		return n1;
	else 
		return n2;
}
int& min(int& n1, int& n2)  // int &n1 = x; int &n2 = y;
{
	if (n1 > n2) 
		return n2;
	else 
		return n1;
}
