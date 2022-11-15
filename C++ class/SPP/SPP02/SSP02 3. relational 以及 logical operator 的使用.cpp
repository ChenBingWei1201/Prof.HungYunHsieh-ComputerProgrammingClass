#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if (x > y) 
		cout << "x > y" << endl;
	else if (x < y)
		cout << "x < y" << endl;
	else if 
		cout << "x = y" << endl;
		
	if (abs(x) > 10) 
		cout << "|x| > 10" << endl;
	else 
		cout << "|x| <= 10" << endl;
  
		
	if (abs(x) < abs(y)) 
		cout << "|x| < |y|" << endl;
	else 
		cout << "|x| >= |y|" << endl;
	
	return 0;
}

