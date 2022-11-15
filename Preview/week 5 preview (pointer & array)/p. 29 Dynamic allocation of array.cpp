#include <iostream>
using namespace std;

int main()
{
	int num, *a, *b;
	cin >> num;
	a = new int[num];
	for (int i = 0; i <= num; i++)
		a[i] = i*i;
	for (int i = 0; i <= num; i++)
		cout << a[i] << " ";
	delete [] a;
	return 0;
}

