#include <iostream>
using namespace std;

int myadd(int a, int b) { return a+b; } 
int myminus(int a, int b) { return a-b; }
int mymultiply(int a, int b) { return a*b; }
int mydivide(int a, int b) { return a/b; }
int calc_do(int x, int y, int (*opt)(int, int)) { return opt(x, y); }

int main( )
{
	int a = 3, b = 2;// 
	int (*p)(int, int) = myadd; // initailize ���覡 , p�O�@�Ө�ƫ���, ���Vmyadd 
	cout << a << "+" << b << "=" << calc_do(a, b, p) << endl;
	p = myminus; // assign ���覡 
	cout << a << "-" << b << "=" << calc_do(a, b, p) << endl;
	p = mymultiply;
	// cout << a << "*" << b << "=" << calc_do(a, b, mymultiply) << endl; // ������i�h���覡 
	cout << a << "*" << b << "=" << calc_do(a, b, p) << endl;
	cout << a << "/" << b << "=" << calc_do(a, b, mydivide) << endl;   // ������i�h���覡 
	return 0;
}

