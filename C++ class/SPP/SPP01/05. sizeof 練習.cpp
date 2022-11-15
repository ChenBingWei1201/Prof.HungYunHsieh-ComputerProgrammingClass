#include <iostream>
#include <climits>
#include <cstdint>
using namespace std;

int main( )
{
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	cout << sizeof(long double) << endl;
	cout << sizeof(uint8_t) << endl;
	cout << sizeof(int64_t) << endl;
	cout << sizeof(9223372036854775807) << endl;
	cout << sizeof(3.1415926535897932384626433832795) << endl;
	cout << ULLONG_MAX << endl;
	cout << SHRT_MIN << endl;
	short a = 32760, b = 10;
	short c = a + b;
	cout << c; 
	
	return 0;
}
