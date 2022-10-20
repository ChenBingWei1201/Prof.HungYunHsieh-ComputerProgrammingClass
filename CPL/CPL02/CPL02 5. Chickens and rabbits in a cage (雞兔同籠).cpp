#include <iostream>
using namespace std;

int main()
{
	int animals = 0, legs = 0, chickens = 0, rabbits = 0;
	cin >> animals >> legs;
	for ( ;chickens <= animals; chickens++)
	{
		rabbits = animals - chickens;
		if (2*chickens + 4*rabbits == legs) 
		{
	    	cout << chickens << " " << rabbits << endl;
	    	return 0;
	    }
	}	
//	if ((2*chicken + 4*rabbit != legs) && (chicken !=1) || (animals == 0))
		cout << "There is no solution" << endl; 
	return 0;
}

