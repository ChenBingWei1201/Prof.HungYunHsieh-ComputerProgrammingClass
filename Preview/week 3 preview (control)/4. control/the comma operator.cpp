#include <iostream>
using namespace std;
int main( )
{
	int a = 1, b = 2, c = 3, i;
	i = a, b;
	cout << i << endl;
	i = (a, b);
	cout << i << endl;
	i = a += 2, a + b;
	cout << i << endl;
	i = (a += 2, a + b);
	cout << i << endl; 
}
