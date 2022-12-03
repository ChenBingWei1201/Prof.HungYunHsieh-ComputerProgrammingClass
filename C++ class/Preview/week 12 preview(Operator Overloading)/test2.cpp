#include <iostream>
using namespace std;
class HugeInteger
{
	int x;
	public:
		const char* operator~(const HugeInteger &);
} x;
HugeInteger HugeInteger::operator~(const HugeInteger &z)
{
	HugeInteger z;
	z.x = x;
	return z;
} 
int main()
{
	HugeInteger hg;
	cout << ~(hg.x);
	return 0;
}

