#include <iostream>
using namespace std;

void hanoi(int n, char i, char j, char k)
{
    if(n == 1)
        cout << i << " -> " << k << endl;
    
    else
	{
        hanoi(n - 1, i, k, j); // ��W�h n-1 �ӽL�l���� j 
        hanoi(1, i, j, k);     // ��̩��h 1 �ӽL�l���� k
        hanoi(n - 1, j, i, k); // �A�� n-1 �ӽL�l����k 
    }
}
int main()
{
    int n;
    cin >> n;
    hanoi(n, '1', '2', '3');
}






