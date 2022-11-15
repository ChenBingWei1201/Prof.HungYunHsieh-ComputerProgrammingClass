#include <iostream>
using namespace std;

int factorial(int);

int main()
{
	int num = 0, sum = 0;
	cin >> num;
	sum = factorial(num);
	cout << sum;
	return 0;
}

int factorial(int n)
{
	int s = 1;
	for (int i = n; i > 1; i--)
		s = s* i;
	return s;
}
