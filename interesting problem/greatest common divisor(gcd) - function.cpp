#include <iostream>
using namespace std;

int gcd(int, int);
int main( )
{
	int num1 = 0, num2 = 0, a = 0;
	
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	a = gcd(num1, num2);
	cout << "There greatest common divisor is: " << a;	
	return 0;
}
int gcd (int num1, int num2)
{
	int  max = 0, min = 0, remain = 1;
	max = num1;
	min = num2;
	if (num2 >= max)
	{
		max = num2;
		min = num1;
	}		
	while (remain != 0)
	{
		remain = max % min;
		max = min;
		if (remain != 0)
			min = remain;
	}
}
