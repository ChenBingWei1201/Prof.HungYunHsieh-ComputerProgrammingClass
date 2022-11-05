//PREPEND BEGIN
#include<iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
int duck(int n, int d){
  	//After passing (n-1) villages, ??? ducks are left
  	//Keep using duck(n-1, ???) function
  	//Thinking about when recursion stops
	d = (d + 1)*2;
	n--;
  	if (n > 0)
		return duck(n,d);
	else
		return d;
}
//TEMPLATE END

//APPEND BEGIN
int main()
{	
	int N, D;
	cin >> N >> D;
	cout << duck(N, D);
    return 0;
}
//APPEND END
/*
Duck
Description

有一個商人要趕著鴨子去每個村子賣，已知：

他每經過一個村子會賣去所有鴨子的一半又一隻。
他經過N個村子後，還剩下D隻鴨子。
在此題，我們需求出商人在出發前有多少隻鴨子。

舉例來說：

商人經過2個村子後，還剩下4 (Half - 1)隻鴨子。
代表商人在第2個村子賣掉了6 (Half + 1)隻鴨子，
也就是他在還沒經過第2個村子(i.e.經過第1個村子後)時，還有10 (4+6)隻鴨子。
以此類推，便可知道商人在出發前有22隻鴨子。


Input
分別輸入兩正整數N和D，代表商人在經過N個村子後，還剩下D隻鴨子。

7 2
表示商人在經過7個村子後，還剩下2隻鴨子。


Output
請輸出商人在出發前有多少隻鴨子。

510
代表商人在出發前有510隻鴨子。


Sample Input 1 

7 2
Sample Output 1

510
Sample Input 2 

2 4
Sample Output 2

22
Sample Input 3 

10 3
Sample Output 3

5118
Hint

此題有template，請大家嘗試用遞迴 (Recursive)的方式完成duck這個function。
