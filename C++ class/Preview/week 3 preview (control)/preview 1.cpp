#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 0, k = 0;
	i = 2;
	j = 3*(i++) - 2;
	i += 3;
	k = 3*(++i) - 2;
	cout << i << " " << j << " " << k << " " << k / j;	
	return 0;
}

