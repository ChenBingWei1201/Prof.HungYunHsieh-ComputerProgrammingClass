#include <iostream>
using namespace std;

int main() 
{
	int pf = 0, pg = 0, counter = 0;
	cin >> pf >> pg;
	int *cf, *cg;
	cf = new int[pf + 1];
	cg = new int[pg + 1];
	for (int i = 0; i < pf + 1; i++)
		cin >> cf[i];
	for (int i = 0; i < pg + 1; i++)
		cin >> cg[i];
	
	// key
	if (pf > pg)
	{
		for (int i = 0; i < pf - pg; i++)
			cout << cf[i] << ",";
		for (int i = pf - pg; i < pf + 1; i++)
			cout << (cf[i] - cg[i - pf + pg]) << ",";	
	}
	else if (pf < pg)
	{
		for (int i = 0; i < pg - pf; i++)
			cout << -cg[i] << ",";
		for (int i = pg - pf; i < pg + 1; i++)
			cout << (cf[i - pg + pf] - cg[i]) << ",";
	}
	else
	{
			for (int i = 0; i < pf + 1; i++)
			{
				if (cf[i] - cg[i] == 0)
				{
					if (i != 0)
						if (cf[i - 1 - counter] - cg[i - 1 - counter] != 0)
							{
								cout << cf[i] - cg[i] << ",";
								counter++;
							}
				}	
				else
					cout << cf[i] - cg[i] << ",";	
			}		
	}
	return 0;
}

