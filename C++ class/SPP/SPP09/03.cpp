//PREPEND BEGIN
#include <iostream>
using namespace std;

class Complex 
{
public:
    Complex(double r = 0, double i = 0): _r(r), _i(i) {}
    ~Complex() {}
//PREPEND END

//TEMPLATE BEGIN
    // todo: 填入第二題的 operator>>, operator<<
	friend ostream &operator<<(ostream &output, const Complex &x) 
	{	
		if (x._i < 0) 
			output << x._r << x._i << "i";
		else
			output << x._r << "+" << x._i << "i";
		return output;
	}
	friend istream & operator>>(istream & input, Complex &x)
	{
		input >> x._r >> x._i;
		return input;
	}  
    // todo: 本題，實作 prefix 跟 postfix 的 operator++
    Complex& operator++()
	{
		++_r;
		return *this;
	} // prefix
	Complex operator++(int)
	{
		Complex d(_r,_i);
		++(*this);
		return d;
	} //postfix
//TEMPLATE END

//APPEND BEGIN
private:
    double _r, _i;
};

int main() {
    Complex a;
    cin >> a;

    Complex b = a++;
    Complex c = ++a;
    Complex d = ++(++a);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}
//APPEND END

