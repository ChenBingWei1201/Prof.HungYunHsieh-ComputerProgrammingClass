#include <iostream>
using namespace std;

unsigned long factorial(int);

int main()
{
	for (int counter = 0; counter <= num; counter++)
		cout << counter << "! = " << factorial(counter) << endl;
}

unsigned long factorial(int number) 
{ 
	if (number <= 1) 
		return 1; 
	else
		return number * factorial(number - 1); 
}
