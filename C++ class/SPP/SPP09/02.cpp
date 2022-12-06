//PREPEND BEGIN
#include <iostream>
using namespace std;
//PREPEND END
//TEMPLATE BEGIN
class Complex {
	//todo
	friend ostream & operator<<(ostream &, const Complex &);
	friend istream & operator>>(istream &, Complex &);
	private:
		int _r, _i; 
	public:
		Complex()
		{
		}
		Complex(int r, int i)
		{
			_r = r;
			_i = i;
		}
		Complex operator+(const Complex&x)
		{
			Complex z;
			z._r = x._r + _r;
			z._i = x._i + _i;
			return z;
		}
};
ostream & operator<<(ostream &, const Complex &);
istream & operator>>(istream &, Complex &);
ostream &operator<<(ostream &output, const Complex &x) 
{
	output << x._r << showpos << x._i << "i";
	return output;
}
istream & operator>>(istream & input, Complex &x)
{
	input >> x._r;
	input >> x._i;
	return input;
} 
//TEMPLATE END
//APPEND BEGIN
int main() {
	
    Complex a,b;
    
    cin >> a;
    cin >> b;
	
    Complex d = a + b + Complex(5, 6);
	
    cout << d << endl;

    return 0;
}
//APPEND END
