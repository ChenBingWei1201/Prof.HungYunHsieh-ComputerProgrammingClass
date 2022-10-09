#include <iostream>

using namespace std;

int main() 
{
	char str[10], *token; //str用來存放輸入字串，token當作指標，表示哪裡開始是母音。
	cin >> str;
	//TEMPLATE BEGIN
	int counter = 0, counter2 = 0;
	for (int i = 0; str[i] != '\0'; i++)
		counter++;
	if ((str[0] == 'a')||(str[0] == 'e')||(str[0] == 'i')||(str[0] == 'o')||(str[0] == 'u'))
		for (int i = 0; str[i] != '\0'; i++)
			cout << str[i];
	else
	{
		for (int i = 0; str[i] != '\0'; i++)
			{
				if ((str[i] != 'a')&&(str[i] != 'e')&&(str[i] != 'i')&&(str[i] != 'o')&&(str[i] != 'u'))
				{
					str[(i + counter)] = str[i];
					counter2++;
				}
				else
					break;	
			}
		for (int i = counter2; i < counter + counter2; i++)
			cout << str[i];
	}
	cout << "ay" << endl;
//TEMPLATE END

//APPEND BEGIN
	return 0;
}
