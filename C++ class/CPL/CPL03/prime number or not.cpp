#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	bool c1 = 1;
	do
	{
		cin >> num;
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0) 
			{
				c1 = 0;
				break;
			}	
			else  
				c1 = 1;							
		}
		cout << c1 << endl;		
	} while (num != -1);
	return 0;
}

