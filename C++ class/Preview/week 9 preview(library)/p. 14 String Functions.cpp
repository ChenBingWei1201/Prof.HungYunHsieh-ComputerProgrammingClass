#include <iostream>
#include <cstring>
using namespace std;
int main( )
{
	char text[70];
	int occupied, reserved;
	strcpy(text, "This is an incomplete sentence, ");
	strcat(text, "but this is.");
	occupied = strlen(text);
	reserved = sizeof(text)/sizeof(char);
	cout << "string=" << text << endl << "occupied=" << occupied << " reserved=" << reserved << endl;
	if (strcmp(text, "Another sentence.") == 0) 
		cout << text << " is equal to \"Another sentence.\"";
}
