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
			for (int i = 2; i <= num; i++) //��num�p����ư��F�G�H�~�s�i�}�C�� 
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
			for (int i = 0; i < p - 1; i++) //�L�X�� 
				cout << a[i] << ", ";
			cout << a[p - 1] << ".";	
		}
		cout << endl;
		p = 0;
	}while (num != -1); //�A�����D�n����X���A�ҥH�n��while 
	return 0;
}
