#include <iostream>
using namespace std;
int main( )
{
    int total = 0;
    
	for (int number = 2; number <= 20; number += 2)
    	total += number;
    
	cout << "Sum is " << total << endl;
    total = 0; 
	for (int number = 2; number <= 20; total += number, number += 2)
		;
	cout << "Sum is " << total << endl;
	total = 0;
	int number = 2;
	for(;;)
	{
		total += number;
		number += 2;
		if (number > 20)
			break;
	}
	cout << "Sum is " << total << endl;
	return 0;
}
