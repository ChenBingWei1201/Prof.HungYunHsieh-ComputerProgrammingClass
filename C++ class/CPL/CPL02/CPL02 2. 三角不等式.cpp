#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	if ((a < b + c) && (b < a + c) && (c < a + b))
		cout << "Side lengths " << a << ", " << b << ", " << c << " "<< "can form a triangle." << endl;
	if ((a >= b + c) || (b >= a +c) || (c >= a + b))
		cout << "Side lengths " << a << ", " << b << ", " << c << " " << "can not form a triangle." << endl;
	
	return 0;
}

