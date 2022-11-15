#include <iostream>
using namespace std;

int main( )
{
	int day, hour, minute;
	for (day = 1; day <= 3; day++)
		cout << "Day = "<< day << endl;
	
	for (hour = 9; hour > 2; hour -= 2)
	{
		minute = 60*hour;
		cout<< "Hour=" << hour << ", Minute = " << minute << endl;
	}
}
