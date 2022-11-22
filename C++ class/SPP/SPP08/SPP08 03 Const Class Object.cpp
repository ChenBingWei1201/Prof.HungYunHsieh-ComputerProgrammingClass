//PREPEND BEGIN
#include <iostream>
using namespace std;

class Circle {
    double _r;
    const double PI; // cannot assign PI = 3.14; use :PI(3.14) 
public:
//PREPEND END

//TEMPLATE BEGIN
	Circle(double r) : PI(3.14)
	{
		_r = r;
	}
    ~Circle() {;}

    double area() const 
	{
		return PI*_r*_r;
	}
    double get_radius() const 
	{
		return _r;
	}
    void set_radius (double r) 
	{
		_r = r;
	}
//TEMPLATE END

//APPEND BEGIN
};

int main() {
    double r;
    cin >> r;

    const Circle c_c(r); // cannot invoke member function, but can invoke const function 
    cout << "const Circle:" << endl;
    cout << "radius = " << c_c.get_radius() << endl;
    cout << "Area = " << c_c.area() << endl << endl;

    cin >> r;

    Circle c(r);
    cout << "non const Circle:" << endl;
    cout << "Before setting radius" << endl;
    cout << "radius = " << c.get_radius() << endl;
    cout << "Area = " << c.area() << endl;

    cin >> r;
    c.set_radius(r);
    cout << "After setting radius" << endl;
    cout << "radius = " << c.get_radius() << endl;
    cout << "Area = " << c.area() << endl;

    return 0;
}
//APPEND END
