#include <iostream>
using namespace std;

struct complex{
	int r, i;
};
int main()
{
	complex **a, **b, **c;
	a = new complex*[2];
	b = new complex*[2];
	c = new complex*[2];
	for (int i = 0; i < 2; i++)
		a[i] = new complex[2];
	for (int i = 0; i < 2; i++)
		b[i] = new complex[2];
	for (int i = 0; i < 2; i++)
		c[i] = new complex[2];	
	
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)	
			cin >> a[i][j].r >> a[i][j].i;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)	
			cin >> b[i][j].r >> b[i][j].i;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)	
		{
			c[i][j].r = a[i][j].r + b[i][j].r;
			c[i][j].i = a[i][j].i + b[i][j].i;
		}	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << c[i][j].r << (c[i][j].i < 0 ? "" : "+") << c[i][j].i << "i ";	
		cout << endl;
	}	
				
			
			
	for (int i = 0; i < 2; i++)
		delete [] a[i];
	delete [] a;
	for (int i = 0; i < 2; i++)
		delete [] b[i];
	delete [] b;
	for (int i = 0; i < 2; i++)
		delete [] c[i];
	delete [] c;	
	
	return 0;
}

