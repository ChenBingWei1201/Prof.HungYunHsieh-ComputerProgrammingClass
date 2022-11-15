#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	int a[4] = {0};
	int *b[4] = {a, a + 1, a + 2, a + 3};
	for (int i = 0; i < 4; i++)
		cout << a[i] << " " << b[i] << endl;
	const char *c = "bridge"; // pointer (I) p.26
	const char *d[4] = {"hearts", "diamonds", "clubs", "spades"};
	char e[5] = {'h', 'e', 'a', 'r', 't'}; //跟之前pointer (I) p.26做個比較 
	cout << c << endl;
	for (int i = 0; i < 4; i++)
		cout << d[i] << " ";
	cout << endl;
	for (int i = 0; i < 4; i++)
		cout << e[i];
	cout << endl << c[3];
	
}
