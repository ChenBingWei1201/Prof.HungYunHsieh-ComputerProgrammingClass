#include <iostream>
using namespace std;

unsigned long factorial(int);

int main()
{
	int num = 0;
	cin >> num;
	for (int counter = 0; counter <= num; counter++)
		cout << counter << "! = " << factorial(counter) << endl;
}

unsigned long factorial(int number) 
{ 
	if (number <= 1) 
		return 1; 
	unsigned long prod = 1;
	for (int i = 2; i <= number; i++) 
		prod *= i; // doesn't invoke itself angain!
	return prod;
}

