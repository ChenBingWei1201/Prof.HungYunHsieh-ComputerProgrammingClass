#include <iostream>
using namespace std;
double max_value(double);
int main( )
{
	double num, max = -1;
	while (1) // true
	{
		cout << "Enter any positive number; negative value to stop: ";
		cin >> num;
		cout<< "old max=" << max << "\tinput number=" << num;
		if (num <= 0) 
			break;
		else 
			max = max_value(num);
		cout<< "\tnew max=" << max <<endl;
	}
}

double max_value(double num)
{
	double max = -1; // delete "static" and try to compile again;
	max = (num > max) ? num : max;
	return max;
}
// enter: 5  2  10  8  15  15  3
// what is new max=?
