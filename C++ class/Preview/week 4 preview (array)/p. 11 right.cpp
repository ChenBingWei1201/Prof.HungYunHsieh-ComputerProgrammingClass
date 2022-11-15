#include <iostream>
using namespace std;
#define WIDTH 5
#define HEIGHT 3

int main()
{
	int jimmy [HEIGHT * WIDTH];
	int n,m;
	for (n=0;n<HEIGHT;n++)
		for (m=0;m<WIDTH;m++)
	{
		jimmy[n*WIDTH+m]=(n+1)*(m+1);
	}
	
	for (n=0;n<HEIGHT;n++)
		for (m=0;m<WIDTH;m++)
	{
		cout << jimmy[n*WIDTH+m] << " ";
	}
	
	return 0;
}

