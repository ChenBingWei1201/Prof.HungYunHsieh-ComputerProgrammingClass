#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	bool c1 = 1; 
	do
	{
		cin >> num;
		if (num == -1)
			break;	
		if (num == 2)
			cout << num << ".";
		if (num <= 1)
		{
			cout << endl;
			continue;
		}
		else if (num != 2)
		{
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
				cout << "2" << ", ";
				{
					
				}
				if (c1 == 1)
				{
					for (int i = 2; i < num; i++)
					for (int j = 2; j <= i; j++)
						if (i % j != 0)
						{
							if (j == i - 1)
								cout << i << ", ";
							continue;
						}	
						else 
							break;
					if (c1 == 1)
						cout << num << ".";	
				}
				else
				{
					for (int i = 2; i < num; i++)
						for (int j = 2; j <= i; j++)
							if (i % j != 0)
							{
								if (j == i - 1)
									cout << i << ", ";
								continue;
							}	
							else 
								break;
						if (c1 == 1)
							cout << num << ".";
				}
										
	    }
	    cout << endl;
	}while (num != -1);
	
	return 0;
}
