#include <iostream>
using namespace std;

int main()
{
	union mix {int i; float f; unsigned char c[4];} 
	x;	
	x.f = -1313.3125;
	for (int i = 3; i >= 0; i--) 
		cout << hex << uppercase << (int)x.c[i];
	return 0;
}

