#include <iostream>
using namespace std;
int main( )
{
	int r = 0, c = 0, sum = 0;
	cin >> r >> c;
	int b[r][c] = {0}, w[r][c] = {0}, p[r][c] = {0};
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> b[i][j];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> w[i][j];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			p[i][j] = w[i][j]* b[i][j];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			sum += p[i][j];
	if (sum >= 0)
		cout << "sum = " << sum << ", it's a dog." << endl;
	else
		cout << "sum = " << sum << ", it's a cat." << endl;
	
	int max = p[0][0], min = p[0][0];
	if (sum >= 0)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				if (p[i][j] >= max)
					max = p[i][j];
		cout << "Minimum value = " << sum - max << ", ";
		if (sum - max < 0)
			cout << "SUCCESS!" << endl;
		else
			cout << "FAIL!" << endl;
	}
	else
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				if (p[i][j] <= min)
					min = p[i][j];
		cout << "Maximum value = " << sum - min << ", ";
		if (sum - min >= 0)
			cout << "SUCCESS!" << endl;
		else
			cout << "FAIL!" << endl;
	}	
	
	return 0;
}
