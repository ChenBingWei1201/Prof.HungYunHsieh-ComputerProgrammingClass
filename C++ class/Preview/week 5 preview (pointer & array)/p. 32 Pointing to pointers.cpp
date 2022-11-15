#include <iostream>
using namespace std;
int main( )
{
	char a = 'z';
	char *b = &a;
	char **c = &b;
	cout << a << " " << b << " " << c << endl;
	cout << a << " " << *b << " " << *c << endl;
	cout << a << " " << *b << " " << **c;
}
