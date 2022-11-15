#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int *r, *f , *d, s = 0;
	r = new int[7];
	f = new int[7];
	d = new int[7];
	for (int i = 0; i < 7; i++)
		cin >> r[i];
	for (int i = 0; i < 7; i++)
		cin >> f[i];
	for (int i = 0; i < 7; i++)
	{
		d[i] = r[i] - f[i];
		d[i] = abs(d[i]);
	}	
	for (int i = 0; i < 7; i++)
		s += d[i];
	cout << s;
	
	delete []r;	
	delete []f;
	delete []d;
	return 0;
}

