#include <iostream>
using namespace std;
int hanio(int n, int i, int j, int k)
{
	if (n == 1)
		cout << i << " -> " << k << endl;
	else
	{
		hanio(n - 1, i, k, j);
		hanio(1, i, j, k);
		hanio(n - 1, j, i, k);
	}
}

int main()
{
	int num = 0;
	cin >> num;
	hanio(num, 1, 2, 3);
	return 0;
}

