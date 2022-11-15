#include <iostream>
#include <cstring>
using namespace std;
int main( )
{
	char sentence[] = "This is a sentence with 7 tokens";
	char *tokenPtr;
	cout << "The string to be tokenized is:\n" << sentence
		 << "\n\nThe tokens are:\n\n";
	tokenPtr = strtok(sentence, " "); // 定義空格是分隔字元 
	while (tokenPtr != NULL)
	{
		cout << tokenPtr << '\n';
		tokenPtr = strtok(NULL, " ");
	} 
	cout << "\nAfter strtok(), sentence = " << sentence << endl;
}
