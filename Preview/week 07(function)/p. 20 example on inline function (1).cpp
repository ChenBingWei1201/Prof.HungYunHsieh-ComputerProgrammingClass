#include <iostream>
using namespace std;

inline int sum(int n)
{
	int val = 0;
	for (int i = 1; i <= n; i++) 
		val += i;
	return val;
}

int main()
{
	int num, total;
	cin >> num;
	total = sum(num);
	cout << total << '\n';
	total = sum(num*2);
	cout << total << '\n';
}
