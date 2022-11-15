#include <iostream>
#include <cmath>
using namespace std;
#define HEIGHT 20
#define WIDTH 60
#define RADIUS 5

int main()
{
	char point[HEIGHT][WIDTH];
	int i, j;
	int counter = 0;
	for (i = 0; i < HEIGHT; i++)
		for (j = 0; j < WIDTH; j++) 
			point[i][j] = ' ';
	
	for (i = 0; i < HEIGHT; i++)
		for (j = 0; j < WIDTH; j++)
	{
		double d = sqrt(pow(WIDTH / 2 - j, 2) + pow(HEIGHT / 2 - i, 2));
		if (abs(d - RADIUS) < 0.3)
		{
			point[i][j] = '*';
			counter++;
		} 
			
			
	}
	
	for (i = 0; i < HEIGHT; i++)
		for (j = 0; j < WIDTH; j++) 
	{
		cout << point[i][j];
		if (j == WIDTH - 1) 
			cout << '\n';
	}
	
	cout << "the number of stars: " << counter;
	return 0;
}

