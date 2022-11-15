#include <iostream>
using namespace std;
int main ()
{
	char array[16] = {0};
	cin.getline(array, sizeof(array));
	int a = 0, e = 0, i = 0, o = 0, u = 0;
	for (int j = 0; j < 16; j++)
	{
		if((array[j] == 65) || (array[j] == 97))
			{
				a++;
				if(array[j] == 97)
					array[j] = 65;	
			}
		else if((array[j] == 69) || (array[j] == 101))
			{
				e++;
				if(array[j] == 101)
					array[j] = 69;		
			}
		else if((array[j] == 73) || (array[j] == 105))
			{
				i++;
				if(array[j] == 105)
					array[j] = 73;		
			}
		else if((array[j] == 79) || (array[j] == 111))
			{
				o++;
				if(array[j] == 111)
					array[j] = 79;		
			}
		else if((array[j] == 85) || (array[j] == 117))
			{
				u++;
				if(array[j] == 117)
					array[j] = 85;		
			}
	}
	cout << "a = " << a << ", " << "e = " << e << ", " << "i = " << i << ", "
		 << "o = " << o << ", " << "u = " << u << "." << endl; 
	cout << array;
		
}
