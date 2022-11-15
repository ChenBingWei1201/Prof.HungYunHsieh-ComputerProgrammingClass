#include <iostream>
using namespace std;
double kinetic_energy(int, double);

int main( )
{
	int mass = 0;
	cout << "Please enter the mass of the object: ";
	cin >> mass;
	double energy = 0, velocity = 0;
	cout << "Please enter the velocity of it: ";
	cin >> velocity;
	energy = kinetic_energy(mass, velocity);
	cout<<"The value of the kinetic energy is: " << energy << endl;
	return 0; 
}

double kinetic_energy(int m, double v)
{
	double ke;
	ke = 0.5*m*v*v;
	return ke;
}
