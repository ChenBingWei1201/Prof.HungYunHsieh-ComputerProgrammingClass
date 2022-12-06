//PREPEND BEGIN
#include <iostream>
using namespace std;
//PREPEND END
//TEMPLATE BEGIN
class Complex {
	//todo
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
		Complex operator-() const
		{
			Complex z;
			z._r = -_r;
			z._i = -_i;
			return z;
			
		}
		void print ()
		{
			cout << _r;
			if (_i == 0)
				;
			else if (_i < 0)
				cout << _i << "i";
			else
				cout << "+" << _i << "i";
			cout << endl;	
		} 
};
//TEMPLATE END
//APPEND BEGIN
int main() {
    Complex a(1, 2);
    Complex b(3, 4);
    Complex d = a + b + Complex(5, 6);
	
	d.print();
	Complex e = -d;
	e.print();

    return 0;
}

//APPEND END
