#include <iostream>
using namespace std;
int gcd(int n, int &num)
{
	static int max1 = n, c = 0;
	int min1 = n;
	int maxi = max(max1, min1);
	int mini = min(max1, min1);
	if (mini)
		while ((maxi %= mini)&&(mini %= maxi))
			;
	max1 = maxi + mini;
	c++;
	if (c == num)
		cout << max1;
	
}

int main()
{
	int num = 0, *a;
	cin >> num;
	a = new int[num];
	for (int i = 0; i < num; i++)
		cin >> a[i];
	for (int i = 0; i < num; i++)
		gcd(a[i], num);
	

	delete []a;
	return 0;
}

