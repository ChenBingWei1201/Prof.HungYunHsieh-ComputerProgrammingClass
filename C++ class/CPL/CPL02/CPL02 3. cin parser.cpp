#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    char c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;
	// 8-base
	if ((c1 == '0') && (c2 != 'x'))
	{
		cout << "The input is octal: " << c1 << c2 << c3 << c4 << endl;
		cout << "decimal: " << (c2 - 48)* pow(8, 2) + (c3 - 48)* 8 + (c4 - 48) << endl;
	}
	// 10-base
	else if (c1 != '0')
	{
		cout << "The input is decimal: " << c1 << c2 << c3 << c4 << endl;
		cout << "decimal: " << (c1 - 48)* pow(10, 3) + (c2 - 48)*pow(10, 2) + (c3 - 48)* 10 + (c4 - 48) << endl;
	}
	// 16-base
	else if ((c1 == '0') && (c2 == 'x')) 
	{
		cout << "The input is hexadecimal: " << c1 << c2 << c3 << c4 << endl;
		
		if (c3 >= 97)
		{
			if(c4 >= 97)
				cout << "decimal: " << (c3 - 87)* 16 + (c4 - 87) << endl;
			else 
				cout << "decimal: " << (c3 - 87)* 16 + (c4 - 48) << endl;
		} 
		else
		{
			if(c4 >= 97)
				cout << "decimal: " << (c3 - 48)* 16 + (c4 - 87) << endl;
			else 
				cout << "decimal: " << (c3 - 48)* 16 + (c4 - 48) << endl;
		}
	}	
	return 0;
}

