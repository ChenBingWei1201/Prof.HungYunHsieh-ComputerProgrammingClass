#include <iostream>
using namespace std;

int main()
{
	int len1 = 0, len2 = 0;
	cin >> len1 >> len2;
	int len = len1 + len2;
	int list1[len1] = {0}, list2[len2] = {0}, mer[len] = {0};
	for (int i = 0; i < len1; i++)
		cin >> list1[i];
	for (int i = 0; i < len2; i++)
		cin >> list2[i];
	for (int i = 0; i < len1; i++)
		mer[i] = list1[i];
	for (int i = len1; i < len; i++)
		mer[i] = list2[i - len1];
	// ÃöÁä°Ú! 
	for (int i = 0; i < len; i++)
		for (int j = i + 1; j < len; j++)
			if (mer[i] >= mer[j])
			{
				mer[i] = mer[i]^ mer[j];
				mer[j] = mer[i]^ mer[j];
				mer[i] = mer[i]^ mer[j];
			}
	// ÃöÁä°Ú! 
	for (int i = 0; i < len; i++)
		{
			cout << mer[i];
			if (i == len1 + len2 - 1)
				cout << endl;
			else 
				cout << " ";
		}
	
	return 0;
}

