#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num = 0, bit = 0;
	int a[18] = {0};
	char board[3][3];
	cin >> num;
	for (int i = 17, l = 17; i >= 0; i--, l--)
	{
		bit = num / pow(2, i);
		if (bit == 1)
			num -= pow(2, i);
		a[l] = bit;
	}
	for (int i = 2; i >= 0; i--)
		for (int j = 2; j >= 0; j--)	
				if (a[6*i + 2*j + 1] == 0)
				{
					if (a[6*i + 2*j] == 0)
						board[i][j] = '*';
					else
						board[i][j] = 'X';
				}
				else
				{
					if (a[6*i + 2*j] == 0)
						board[i][j] = 'O';
					else
						board[i][j] = '*';
				}		
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j];
			if (j == 2)
				cout << "\n";
			else
				;
		}
    return 0;
}
