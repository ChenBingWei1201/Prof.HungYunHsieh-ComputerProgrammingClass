#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int num1, num2, num3;
	double width1, width2, pi = 3.1415926;
	cin >> num1 >> num2 >> num3;
	cin >> width1 >> width2;
	cout << "sum = " << num1 + num2 + num3 << endl;
	double a = (num1 + num2 + num3)/3.0 ;
	cout << "average = " << fixed << setprecision(6) << a << endl;
	cout.unsetf(ios::fixed);
	cout << "product = " << num1*num2*num3 << endl;
	double sop = num1*num2*num3;
	cout << "sqrt of product = " << fixed << setprecision(6) << sqrt(sop) << endl;
	cout.unsetf(ios::fixed);
	int largest = num1;
	if (num2 >= largest)
		largest = num2;
	if(num3 >= largest)
		largest = num3;	
	cout << "largest = " << largest << endl; 
	cout << "degree = " << round(atan(width1/width2)* 180 /pi) << endl;
	return 0;
}
