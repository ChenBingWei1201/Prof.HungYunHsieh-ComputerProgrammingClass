#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x;
	cin >> x;
	cout << fixed << setprecision(3);
	cout << "ceil(x) = " << ceil(x) <<"."<< endl;
	cout << "floor(x) = " << floor(x) <<"."<< endl;
	cout << "round(x) = " << round(x) <<"."<<endl;
	cout << "trunc(x) = " << trunc(x) <<"."<<endl;
	cout << "ln(1+x) = " << log(1 + x) <<"."<< endl;
	cout << "x - (1/2)*x^2 + (1/3)*x^3 - (1/4)*x^4 = " << x - (1.0/2.0)*pow(x,2) + (1.0/3.0)*pow(x,3) - (1.0/4.0)*pow(x,4) <<"."<< endl;
	cout << "sin(x) = " << sin(x) <<", " << "cos(x) = " << cos(x) <<"."<< endl;
	cout << "sin(x)^2 + cos(x)^2 = " << pow(sin(x), 2) + pow(cos(x), 2) <<"."<< endl; 
	cout << "(e^x - e^(-x))/2 = " << (exp(x) - exp(-x))/2.0 <<"."<< endl;
	cout << "sinh(x) = " << sinh(x) <<"."<< endl;
	return 0;
}

