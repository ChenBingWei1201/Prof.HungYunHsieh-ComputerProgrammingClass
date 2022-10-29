#include <iostream>
using namespace std;

double sum = 0;

void commute_time (double, double = 20, int = 8);

int main( )
{
	commute_time(40);
	commute_time(30, 20);
	commute_time(35, 30, 8);
	cout << sum;
}

void commute_time(double velocity, double distance, int num_lights)
{
	cout << "The commute time is " << (distance/velocity + num_lights*0.01) 
		 << " hours." << endl;
	sum += velocity + distance + (double)num_lights;
	//cout << velocity << " " << distance << " " << num_lights << endl;
}
