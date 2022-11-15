#include <iostream>
using namespace std;

int gcd(int &a, int &b)
{
	int maxi = max(a,b), mini = min(a,b);
	if (mini)
		while ((maxi %= mini)&&(mini %= maxi))
			;
	int gcd = maxi + mini;
	a /= gcd;
	b /= gcd;
	
}
struct rational 
{
	int n;
	int d;
};
rational rplus(rational, rational);
rational rmultiply(rational, rational);
rational rdivide(rational, rational);

int main( )
{
	// rational a, b;
	// cin >> a.n >> a.d >> b.n >> b.d;
	rational a = {4, 6}, b = {2, 3}; //a.n = 4, a.d = 6; b.n = 2, b.d = 3;
	rational c, d, e;
	
	c = rplus(a, b);  
	d = rmultiply(a, b);
	e = rdivide(a, b);
	
	gcd(c.n, c.d);
	gcd(d.n, d.d);
	gcd(e.n, e.d);
	
	if (c.d != 1)
		cout<<a.n<<"/"<<a.d<<"+"<<b.n<<"/"<<b.d<<"="<<c.n<<"/"<<c.d<<endl;
	else
		cout<<a.n<<"/"<<a.d<<"+"<<b.n<<"/"<<b.d<<"="<<c.n<<endl;
	if (d.d != 1)
		cout<<a.n<<"/"<<a.d<<"+"<<b.n<<"/"<<b.d<<"="<<d.n<<"/"<<d.d<<endl;
	else
		cout<<a.n<<"/"<<a.d<<"+"<<b.n<<"/"<<b.d<<"="<<d.n<<endl;
	if (e.d != 1)
		cout<<a.n<<"/"<<a.d<<"+"<<b.n<<"/"<<b.d<<"="<<e.n<<"/"<<e.d<<endl;
	else
		cout<<a.n<<"/"<<a.d<<"+"<<b.n<<"/"<<b.d<<"="<<e.n<<endl;
}

rational rplus(rational x, rational y) {
	rational z;
	z.n = x.n*y.d + x.d*y.n; // 4*3 + 6*2 = 12 + 12 = 24
	z.d = x.d*y.d;           // 6*3 = 18
	return z;
}

rational rmultiply(rational x, rational y) {
	rational z;
	z.n = x.n*y.n;           // 4*2 = 8
	z.d = x.d*y.d;           // 6*3 = 18
	return z;
}

rational rdivide(rational x, rational y) {
	rational z;
	z.n = x.n*y.d;           // 4*3 = 12
	z.d = x.d*y.n;           // 6*2 = 12
	return z;
}
