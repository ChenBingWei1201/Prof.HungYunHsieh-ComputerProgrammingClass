#include <iostream>
using namespace std;

int main()
{
	char char1 = 0;
	cin >> char1;
	int num1 = char1;
	cout << "CHAR \'" << char1 << "\'" << endl;
	cout << "hex = \'\\x" << hex << num1 << "\'\n";
	cout << "oct = \'\\" << oct << num1 << "\'\n";  
	
	return 0;
}

