#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	int  a[num-1][num-1];
	for (int i = 0; i < num - 1 ; i++)
		for (int j = 0; j < num - 1; j++) 
		{
			if (j == 0)
				a[i][j] = (i + 1) % num;
			a[i][j + 1] = (a[i][j]*(i + 1)) % num;
		}
	for (int i = 0; i < num - 1; i++)
		for (int j = 0; j < num - 1; j++) 
		{
			cout << setw(3) << a[i][j];
			if (j == num - 2)
				cout << endl;
	    }
	return 0;
}

