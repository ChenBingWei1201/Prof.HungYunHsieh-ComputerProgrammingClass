#include <iostream>
using namespace std;

int main()
{
	int a[5] = {1, 3, 2, 6, 2};
	for (int i = 0; i < 5; i++)
		for (int j = i + 1; j < 5; j++)
			if (a[j] <= a[i])
			{
				a[i] = a[i]^a[j];
				a[j] = a[i]^a[j];
				a[i] = a[i]^a[j];
			}
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	return 0;
}

