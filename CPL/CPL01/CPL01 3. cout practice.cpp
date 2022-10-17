#include <iostream>
using namespace std;

int main( )
{
	char ascii = 0;
	cin >> ascii;
	int literal = ascii;
	cout << "CHAR " << "\'" <<  ascii << "\'" << "\n";
	cout << "hex = \'\\x" << hex << literal << "\'" << "\n";
	cout << "oct = \'\\" << oct << literal << "\'" << "\n";
	return 0;
}
