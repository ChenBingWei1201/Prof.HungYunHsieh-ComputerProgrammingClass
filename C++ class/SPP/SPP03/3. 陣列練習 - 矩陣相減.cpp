#include <iostream>
using namespace std;
int main ()
{
	
	int i = 0, j = 0;
	cin >> i >> j;
	int a[i][j], b[i][j], c[i][j];
	for (int k = 0; k < i; k++)
		for(int l = 0; l < j; l++)
		cin >> a[k][l];
	for (int k = 0; k < i; k++)
		for(int l = 0; l < j; l++)
		cin >> b[k][l];
	for (int k = 0; k < i; k++)
		for(int l = 0; l < j; l++)
		{
			c[k][l] = a [k][l] - b[k][l];
			cout << c[k][l];
			if(l < j)
				if(l == j-1)
					cout << "\n";
				else
					cout << " ";
		}	
		
	return 0;	
} 
