#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	unsigned short num = 0, k = 0;
	cin >> num;
	for (int i = 15; i >= 0; i--)
	{
		k = num / pow(2, i);
		if (k == 1)
			num -= pow(2, i);
		cout << k;
	}		
	return 0;
}

