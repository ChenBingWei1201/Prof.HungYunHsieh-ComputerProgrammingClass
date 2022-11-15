#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	unsigned char a[8] = {0x00, 0x00, 0x00, 0x00, 0x40, 0x85, 0x94, 0xC0};
	void *p = a;
	cout << "double value=" << setprecision(8) << *(double*)p << endl;
	double x = -1313.3125;
	p = &x;
	cout << "byte sequence=";
	for (int i = 7; i >= 0; i--) 
		cout << hex << uppercase << setfill('0') << setw(2) << (int)( (unsigned char*)p )[i] << ' ';
}
//C0948540
