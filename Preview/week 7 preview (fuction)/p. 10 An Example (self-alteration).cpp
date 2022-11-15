#include <iostream>
using namespace std;
double potential_energy(int, double);
double kinetic_energy(int, double);

int main( )
{
	int mass = 0;
	double velocity = 0, height = 0;
	
	cout << "Please enter the mass and the velocity of the object :";
	cin >> mass >> velocity;
	//cout << endl;
	cout << "Please enter the height of the object :";
	cin >> height;
	// cout << "The value of mass you entering is: " << mass << endl;
	cout << "potential energy of the object = " << potential_energy(mass, height) << endl;
	cout << "kinetic energy of the object = " << kinetic_energy(mass, velocity);
	//cout<<"Now the value of mass in main is: " << mass << endl;
}
double potential_energy(int m, double h)
{
	//int mass = 6;
	double pe; //, height=5.2
	double g = 9.81;
	pe = m* g* h;
	return pe;
	//cout<<"Potential energy="<<pe<<endl;
}
double kinetic_energy(int m, double v)
{
	double ke;
	ke = 0.5*m*v*v;
	return ke;
	//cout << "Kinetic energy=" << ke << endl;
}
