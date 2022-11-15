#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	unsigned char a[4] = {0};
	unsigned char b[8] = {0};
	unsigned char c[16] = {0};
	void *p = a, *q = b, *r = c;
	cin >> *(float*)p >> *(double*)q >> *(long double*)r;
	
	cout << "byte sequence(float) = 0x";
	for (int i = 3; i >= 0; i--) 
		cout << hex << uppercase  << setw(2) << setfill('0') << (int)( (unsigned char*)p )[i];
	cout << endl;

	cout << "byte sequence(double) = 0x";
	for (int i = 7; i >= 0; i--) 
		cout << hex << uppercase  <<setw(2) << setfill('0') << (int)( (unsigned char*)q )[i];
	cout << endl;

	cout << "byte sequence(long double) = 0x";
	for (int i = 15; i >= 0; i--) 
		cout << hex << uppercase  <<setw(2) << setfill('0') << (int)( (unsigned char*)r )[i];
	cout << endl;
	return 0;
}

