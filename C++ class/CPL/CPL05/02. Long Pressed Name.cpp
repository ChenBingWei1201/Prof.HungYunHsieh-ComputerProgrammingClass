//PREPEND BEGIN
#include <iostream>

using namespace std;

int main() {
	bool ans = true;
	int N, T;	
	cin >> N >> T;
	
	char *name, *typed;
//PREPEND END

//TEMPLATE BEGIN
  	//先利用 new 分配 name 和 typed 大小
  	name = new char[N];
  	typed = new char[T];
  	// cin
	for (int l = 0; l < N; l++)
		cin >> name[l];
	for (int m = 0; m < T; m++)
		cin >> typed[m];
	
	int i = 0, j = 0;
	while ((i < N) && (j < T))
	{
		// TO DO
		if (name[i] != typed[j])
			break;
		else
		{
			i++;
			j++;
		}
		if ((typed[j] == typed[j - 1])&&(name[i] != name[i-1]))
		{
			j++;
			while (typed[j] == typed[j - 1])
				j++;	
		}	
	}
	cout << i << " " << j << endl;
	if(i + j == N + T)
	{		//請填入條件判斷式
		ans = true;
	}
    else 
	{
        ans = false;
    }
        
//TEMPLATE END

//APPEND BEGIN
        
	cout << boolalpha << ans << endl;
	delete []name;
	delete []typed;
	return 0;
}
//APPEND END
