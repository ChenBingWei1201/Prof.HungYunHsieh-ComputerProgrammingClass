#include <iostream>
using namespace std;

unsigned long fibonacci(int number) 
{ 
	if (number == 0) 
		return 0; 
	unsigned long u = 0, v = 1, t;
	for (int i = 2; i <= number; i++) 
	{
		t = u + v;
		u = v;
		v = t;
	} // doesn't invoke itself angain!
	return v;
}

int main()
{
	for (int c = 0; c <= 10; c++)
		cout << "fibonacci( " << c << " ) = " << fibonacci(c) << endl;
}
