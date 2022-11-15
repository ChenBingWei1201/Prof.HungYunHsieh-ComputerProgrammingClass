#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num1 = 0, num2 = 0, bit1 = 0, bit2 = 0, counter = 0;
	cin >> num1 >> num2;
	for (int i = 31; i >= 0; i--)
	{
		bit1 = num1 / pow(2, i);
		if (bit1 == 1)
			num1 -= pow(2,i);
		bit2 = num2 / pow(2, i);
		if (bit2 == 1)
			num2 -= pow(2, i);
		if(bit1 != bit2)
			counter++;
	}
	cout << counter; 
	return 0;
}

