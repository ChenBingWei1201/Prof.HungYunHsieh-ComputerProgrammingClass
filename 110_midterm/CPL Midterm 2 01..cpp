#include <iostream>
using namespace std;
int c = 0;
void func0()
{
	static int c0 = 1;
	cout << "Line " << (c + 1) << " func0() is called the " << c0 << " times" << endl;
	c++;
	c0++;
}
void func1()
{
	static int c1 = 1;
	cout << "Line " << (c + 1) << " func1() is called the " << c1 << " times" << endl;
	c++;
	c1++;
}
void func2()
{
	static int c2 = 1;
	cout << "Line " << (c + 1) << " func2() is called the " << c2 << " times" << endl;
	c++;
	c2++;
}
int main()
{
	int i;
	while(cin >> i)
	{
		i %= 3;
		if (i == 0)
			func0();
		else if (i == 1)
			func1();
		else
			func2();
	}
	return 0;
}

