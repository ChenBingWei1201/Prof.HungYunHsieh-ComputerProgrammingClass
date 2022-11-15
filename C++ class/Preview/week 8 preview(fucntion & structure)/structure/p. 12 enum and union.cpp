#include <iostream>
using namespace std;


int main()
{
	enum color {red = 1, green, blue = 4}; // 1, 2, 4;
	color a = red;
	cout << red << endl;
	// color.red = 11; // wrong;
	if (a == red) 
		a = blue;
	cout << a << endl << green << endl;    // 4, 2; 
	cout << (red|green);
	return 0;
}

