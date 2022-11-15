#include <iostream>
using namespace std;
int max(int n1, int n2)
{
	int m;
	m = n1>n2 ? n1 : n2;
	return m;
}

int main( )
{
	int num1, num2, m;
	cout << "Enter two integer numbers:"; 
	cin >> num1 >> num2;
	m = max(num1, num2);
	cout << "The max of " << num1 << " and " << num2 << " is " 
	<< m << endl;
}
