#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int height = 0;
	cin >> height;
	int white = height;
	for (int num = 1, star, time; white > 0; --white, ++num)
	{
		if (num % 2 != 0)
		{
			star = num - 1;
			time = num;
		}	
		else
		{
			star = num;
			time = num - 1;
		} 
		cout << setw(white);
		if (star == num - 1)
			{
				for (;(star > -1) && (time > 0); --star, --time) 
				{
					if(height >= 10)
					{
						int num2 = num % 10;
						if (time > 0)
							cout << num2;
						if (star > 0)
							cout << "*";
					}
					else
					{
						if (time > 0)
							cout << num;
						if (star > 0)
							cout << "*";
					}		
				}			
			}				
		else
			{
				for (;(star > 0) && (time > -1); --star, --time) 
				{
					if(height >= 10)
					{
						int num2 = num % 10;
						if (star > 0)
							cout << "*";
						if (time > 0)
							cout << num2;
					}
					else
					{
						if (star > 0)
							cout << "*";
						if (time > 0)
							cout << num;
					}		
				}			
			}
		if (num != height)
			cout << setw(white - 1) << " " <<  endl;
		else 
			cout << "\n";
	}
	int w = height + 2;
	if (height <= 3)
	{
		cout << "@@@@@" << endl;	
		cout << "@@@@@" << endl;
		cout << "@@@@@" << endl;
		cout << "@@@@@" << endl;
	}
	else
	{
		cout << setw(w) << "@@@@@" << setw(w - 5) << " "<< endl;	
		cout << setw(w) << "@@@@@" << setw(w - 5) << " " << endl;
		cout << setw(w) << "@@@@@" << setw(w - 5) << " " << endl;
		cout << setw(w) << "@@@@@" << setw(w - 5) << " " << endl;
	}
	return 0;
}
