#include <iostream>
using namespace std;
int main()
{
	int num, total;
	cin >> num;
	{
		int n = num;
		int val = 0;
		for (int i = 1; i <= n; i++) 
			val += i;
		total = val;
	}
		cout << total << '\n';
	{
		int n = 2*num;
		int val = 0;
		for (int i = 1; i <= n; i++) 
			val += i;
		total = val;
	}
		cout << total << '\n';
}
