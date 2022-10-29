#include <iostream>
#include "maximum.h"
using namespace std;

int main( )
{
	int int1, int2, int3;
	cout << "Input three integer value: ";
	cin >> int1 >> int2 >> int3;
	cout << "Maximum integer is " << maximum(int1, int2, int3) << endl;
	double double1, double2, double3;
	cout << "Input three double value: ";
	cin >> double1 >> double2 >> double3;
	cout << "Maximum double is " << maximum(double1, double2, double3);
}

