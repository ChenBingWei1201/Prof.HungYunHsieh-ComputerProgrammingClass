#include <iostream>
using namespace std;
int main()
{
	int num = 0, p = 0;
	do
	{
		cin >> num;	
		if (num == 2)
			cout << num << ".";
		else if (num <= 1)
		{
			cout << endl;
			continue;
		}
		else if ((num != 2) && (num > 1))
		{
			int a[num] = {0};
			cout << "2, ";
			for (int i = 2; i <= num; i++) //比num小的質數除了二以外存進陣列中 
				for (int j = 2; j <= i; j++)
					if (i % j != 0)
					{
						if (j == i - 1)
						{
							a[p] = i;
							p++;
						}	
					}
					else
						break;
			for (int i = 0; i < p - 1; i++) //印出來 
				cout << a[i] << ", ";
			cout << a[p - 1] << ".";	
		}
		cout << endl;
		p = 0;
	}while (num != -1); //你不知道要執行幾次，所以要用while 
	return 0;
}
