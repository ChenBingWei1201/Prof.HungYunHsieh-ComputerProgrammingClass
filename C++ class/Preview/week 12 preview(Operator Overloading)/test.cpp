#include <iostream>
using namespace std;
class HugeInteger
{
	
	public:
		int hg;
		HugeInteger (int hg1 = 0)
		{
			hg = hg1;	
		}
		HugeInteger& operator++ ();
		HugeInteger operator++ (int);
		int GetHugeInteger() const
		{
			return hg;
		}
};
HugeInteger& HugeInteger::operator++()
{
	if (hg == 9)
		hg = 0;
	else
		hg++;
	return (*this);
}
HugeInteger HugeInteger::operator++(int)
{
	HugeInteger Hg(hg);
	++(*this);
	return Hg;
}
int main()
{
	HugeInteger hG(8);
	++hG;
	cout << hG.hg << endl;
	hG++;
	cout << hG.hg;
	return 0;
}

