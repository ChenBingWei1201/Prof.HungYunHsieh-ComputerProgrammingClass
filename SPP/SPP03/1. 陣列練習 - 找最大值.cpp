#include <iostream>
using namespace std;
int main ()
{
	int i = 0;
	cin >> i;
	int a[i] ={0};
	
	for (int j = 0; j < i; j++)
	{
		cin >> a[j];		
	}
	int max = a[0], m = 0;
	for (int j = 0; j < i; j++)
	{
		if(a[j] > max)
		{
			max = a[j];
			m = j;	
		}
					
	}
	cout << max << " " << m + 1;
	return 0;		
} 
