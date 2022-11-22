//PREPEND BEGIN
#include <iostream>
using namespace std;

int constructor_calls = 0;

class Rectangular {
public:
//PREPEND END

//TEMPLATE BEGIN
    // todo: Rectangular(int l = 0) //a b 
    // todo: Rectangular(int h, int w) // c
    // todo: Rectangular(const Rectangular& r) // d f
    Rectangular(int l = 0)
	{
		_height = l; 
		_width = l;
		constructor_calls++;			
	}
	Rectangular(int h, int w)
	{
		_height = h; 
		_width = w;
		constructor_calls++;
	}
	Rectangular(const Rectangular& r)
	{
		_height = r._height; 
		_width = r._width;
		constructor_calls++;
	}
//TEMPLATE END

//APPEND BEGIN
    ~Rectangular() {}
private:
    int _height, _width;
};

void call_by_value(Rectangular a) {
    cout << "call_by_value(Rectangular a) called" << endl;
}
void call_by_reference(Rectangular &a) {
    cout << "call_by_reference(Rectangular &a) called" << endl;
}

int main() {
    Rectangular a;
    Rectangular b(5);
    Rectangular c(2, 3);
    Rectangular d = c;
    Rectangular *p = new Rectangular[5];
    Rectangular &e = c;
    Rectangular f(c);

    call_by_value(a);
    call_by_reference(a);

    cout << endl << "totally " << constructor_calls << " constructors called" << endl;

    delete[] p;
    return 0;
}
//APPEND END
