#include <iostream>

using namespace std;

void move(int*[], int, int ,int);
void reversal(int*[], int, int, int);

int main(){
  int array[100];
  int *arr[100];
  int len;
  cin >> len;
  for( int i = 0; i < len; i++ ){
    cin >> array[i];
    arr[i] = &array[i];
  }

  int N;
  cin >> N;
  for( int i = 0; i < N; i++){
    char command;
    int start, end;
    cin >> command >> start >> end;
    
    if( command == 'm' )
      move(arr, len, start, end);
    if( command == 'r')
      reversal(arr, len, start, end);
  }
  
  for( int i = 0; i < len; i++)
    cout << *arr[i] << " ";
}

/* finish this two function and pend the code of these two functions only*/
void move(int *arr[], int len, int start, int end){
	int k = 0, l = 0, counter = 0;
	for (int j = start; j <= end; j++)
			{
				counter = 0;
				l = j;
				k = l - 1;
				do
				{
					*arr[k] = *arr[l]^ *arr[k];
					*arr[l] = *arr[l]^ *arr[k];
					*arr[k] = *arr[l]^ *arr[k];
					k--;
					l--;
					counter++;
					if (counter == start)
						break;					
				}while (k >= 0);	
			}
}
void reversal(int *arr[], int len, int start, int end){
	for (int j = start, k = end; j != k; )
			{
				*arr[j] = *arr[j]^ *arr[k];
				*arr[k] = *arr[j]^ *arr[k];
				*arr[j] = *arr[j]^ *arr[k];
				j++;
				k--;
				if (k < j)
					break;
			}
}

