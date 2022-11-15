#include <iostream>
using namespace std;

int main( )
{
	int num1 = 0, num2 = 0, max = 0, min = 0, remain = 1;
	
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
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
	cout << "There greatest common divisor is: " << min;	
	return 0;
}

	 
	

