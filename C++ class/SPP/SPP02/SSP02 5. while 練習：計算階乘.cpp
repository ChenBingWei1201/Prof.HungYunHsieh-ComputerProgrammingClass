#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 0, k= 1;
	cin >> i;
	while (j < i)
	{
		j++;
		k *= j;
	}
	cout << i << "! = " << k << endl;
	return 0;
}

