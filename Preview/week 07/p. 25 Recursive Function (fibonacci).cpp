#include <iostream>
#include <iomanip>
using namespace std;

unsigned int fibonacci(int);

int main()
{
	int n = 0;
	cin >> n;
	for (int c = 0; c <= n; c++)
		cout << "fibonacci( " << c << " ) = " << fibonacci(c) << endl;
	return 0;
}

inline unsigned int fibonacci(int num) 
{ 
	if (num <= 1) 
		return num; 
	else 
		return fibonacci(num - 1) + fibonacci(num - 2); // invokes itself angain!
	 
}
