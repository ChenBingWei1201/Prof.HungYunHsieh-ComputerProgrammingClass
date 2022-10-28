//PREPEND BEGIN
#include<iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
int ways(int a, int b){
	
	if ((a == 1)||(b == 1))
		return 1;
	else
		return ways(a - 1, b) + ways(a, b - 1);
}
//TEMPLATE END

//APPEND BEGIN
int main()
{	
	int a, b;
	cin >> a >> b;
	cout << ways(a,b);
    return 0;
}
//APPEND END
