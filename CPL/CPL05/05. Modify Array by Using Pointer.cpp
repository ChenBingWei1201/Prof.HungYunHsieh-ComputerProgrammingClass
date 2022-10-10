//PREPEND BEGIN
#include <iostream>
using namespace std;
int main(){
	int array[100];
	int *arr[100];
	int len;
	cin >> len;
	for( int i = 0; i < len; i++ )
	{
		cin >> array[i];
		arr[i] = &array[i];
	}
		
	int N;
	cin >> N;
	for( int i = 0; i < N; i++)
	{
		char command;
		int start, end;
		cin >> command >> start >> end;
		//PREPEND END
		
        	//TEMPLATE BEGIN
		/*To do*/
		int k = 0, l = 0, counter = 0;
		if (command == 'm')
			for (int j = start; j <= end; j++)
			{
				counter = 0;
				l = j;
				k = l - 1;
				do
				{
					array[k] = array[l]^ array[k];
					array[l] = array[l]^ array[k];
					array[k] = array[l]^ array[k];
					k--;
					l--;
					counter++;
					if (counter == start)
						break;					
				}while (k >= 0);	
			}
		if (command == 'r')
			for (int j = start, k = end; j != k; )
			{
				array[j] = array[j]^ array[k];
				array[k] = array[j]^ array[k];
				array[j] = array[j]^ array[k];
				j++;
				k--;
				if (k < j)
					break;
			}
				
		//TEMPLATE END   
  
	//APPEND BEGIN
    }
	for( int i = 0; i < len; i++)
		cout << *arr[i] << " ";
}
//APPEND END
