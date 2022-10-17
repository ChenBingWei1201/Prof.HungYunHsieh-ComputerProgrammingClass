#include <iostream>
using namespace std;

int main()
{
	int year = 0, month = 0, day = 0;
	cin >> year >> month;
	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			day = 31;
			break;
		case 4: case 6: case 9: case 11:
			day = 30;
			break;
		case 2:
		if((year % 4 == 0) && (year % 100 != 0))
			day = 29;
		if((year % 4 == 0) && (year % 100 == 0))
			day = 28;
		if(year % 400 == 0) 
			day = 29;
		if(year % 4 != 0)
			day = 28;
		break; 		 
		
	}
		cout << day;
	return 0;
}

