#include <iostream>
using namespace std;
void push(int[], int*, int*, int);
void pop(int[], int*, int*);
void print(int[], int*, int*);
int main(){
  int N;
  int input;
  cin >> N;
  int stack[10];
  int head = 0;
  int len = 0;
  for( int i = 0; i < N; i++ ){
    char command;
    cin >> command;
    if( command == 'p'){
      cin >> input;
      push(stack, &len, &head, input);
    }
    if( command == 'd'){
      pop(stack, &len, &head);
    }
  }
  print(stack, &head, &len);
}
/*finish the following three functions and upload the code of these functions*/
void push(int stack[], int *len, int *head, int input){
	stack[*head] = input;
	//cout << stack[*head] << " ";
	(*head)++;
	(*len)++;
	
}
void pop(int stack[], int *len, int *head){
	(*head)--;
	(*len)--;
	stack[*head] = 0;
}
void print(int stack[], int *head, int *len){
	for (int i = (*len)-1; i >= 0; i--)
	{
		if (stack[i] != 0)
			cout << stack[i] << " ";
		else
			break;
	}	
	cout << endl;
	
}


