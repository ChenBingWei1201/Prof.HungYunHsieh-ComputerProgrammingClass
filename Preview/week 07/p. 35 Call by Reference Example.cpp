#include <iostream>
using namespace std;

void cube_vol_area(int, double, double, double, double&, double&);

int main( )
{
	int id = 5;
	double s = 3, v = 10, x = 6.3, y = 7.2, z = 1.5;
	cout << "cube surface area=" << s << " cube volume=" << v << endl; // ¤W 
	cube_vol_area(id, x, y, z, s, v);
	cout<<"cube surface area="<<s<<" cube volume="<<v<<endl; // ¤U 
}

void cube_vol_area (int id, double width, double length, double height, 
					double& surface, double& volume) // double &surface = s, &volume = v; 
{
	surface = 2*width*height+2*length*height+2*width*length; 
	volume = width*length*height;
	cout<<"cube surface area="<<surface<<" cube volume="<<volume<<endl; // ¤¤ 
}
