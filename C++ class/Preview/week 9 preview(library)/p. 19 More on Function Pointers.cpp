#include <iostream>
using namespace std;

int myadd(int a, int b) { return a+b; } 
int myminus(int a, int b) { return a-b; }
int mymultiply(int a, int b) { return a*b; }
int mydivide(int a, int b) { return a/b; }
int calc_do(int x, int y, int (*opt)(int, int)) { return opt(x, y); }

int main( )
{
	int a = 3, b = 2;
	int (*p)(int, int) = myadd; // initailize 的方式 , p是一個函數指標, 指向myadd 
	cout << a << "+" << b << "=" << calc_do(a, b, p) << endl;
	p = myminus; // assign 的方式 
	cout << a << "-" << b << "=" << calc_do(a, b, p) << endl;
	p = mymultiply;
	// cout << a << "*" << b << "=" << calc_do(a, b, mymultiply) << endl; // 直接丟進去的方式 
	cout << a << "*" << b << "=" << calc_do(a, b, p) << endl;
	cout << a << "/" << b << "=" << calc_do(a, b, mydivide) << endl;   // 直接丟進去的方式 
	return 0;
}

