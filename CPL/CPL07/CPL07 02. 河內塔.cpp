#include <iostream>
using namespace std;

void hanoi(int n, char i, char j, char k)
{
    if(n == 1)
        cout << i << " -> " << k << endl;
    
    else
	{
        hanoi(n - 1, i, k, j); // 把上層 n-1 個盤子移到 j 
        hanoi(1, i, j, k);     // 把最底層 1 個盤子移到 k
        hanoi(n - 1, j, i, k); // 再把 n-1 個盤子移到k 
    }
}
int main()
{
    int n;
    cin >> n;
    hanoi(n, '1', '2', '3');
}






