#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int c = 2, d = 3;
	cout << "c & d = " << (c & d) << endl;
	cout << "c | d = " << (c | d) << endl;
	cout << "c ^ d = " << (c ^ d) << endl;
	cout << "c << d = " << (c << d) << endl;
	cout << "~c = " << (~c) << endl;
	cout << "~c >> d = " << (~c >> d) << endl;
	
	return 0;
}

