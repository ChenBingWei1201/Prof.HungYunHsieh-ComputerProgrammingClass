#include <iostream>
using namespace std;

int main()
{
	int x = 0, counter = 0, buffer = 0;
	cin >> x;
	cout << "Sequence = ";
	for (int num = 1, den = 2; counter < x ; counter++)
	{
		cout << num << "/" << den;
		if (counter == x - 1)
			;
		else
			cout << ", ";
		buffer = num;
		num = den;
		den = buffer + den;
	}	
	return 0;
}
