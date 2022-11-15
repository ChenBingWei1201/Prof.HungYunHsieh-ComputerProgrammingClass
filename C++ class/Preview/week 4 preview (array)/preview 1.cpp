#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main( )
{
	char aa;
	char bb[4], cc[15];
	aa='g';
	bb[0]='c';
	bb[1]='a';
	bb[2]='t';
	bb[3]='\0';
	cout << "aa=" << aa << ", bb=" << bb << endl;
	cout << "Enter a string of less than 14 characters:\n";
	cin >> setw(sizeof(cc)) >> cc;
	cout << "String=" << cc << endl;
	cin.getline(cc, sizeof(cc));
	
}
