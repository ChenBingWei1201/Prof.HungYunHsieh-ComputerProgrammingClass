#include <iostream>
using namespace std;
int main()
{
	char M, E, C;
	cin >> M >> E >> C;
	char eyes = E + 32;
    char left_cheek = C - 1 ;
    char right_cheek= C + 1;
    cout << left_cheek << eyes << M << eyes << right_cheek; 
	return 0;
}
