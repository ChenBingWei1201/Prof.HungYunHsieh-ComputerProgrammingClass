#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main( )
{
	float  x = 4.0*atan(1.0f);
	double y = 4.0*atan(1.0);
	long double z = 4.0*sqrt(tanh(1.0l));  //change atan() to sqrt(tanh())
	cout << setprecision(20)<< "float = \t" << x<< "\ndouble = \t" << y 
		 << "\nlong double = \t" << z << endl;
	cout << fixed << setprecision(20)<< "float = \t" << x<< "\ndouble = \t" << y 
		 << "\nlong double = \t" << z << endl;
}
