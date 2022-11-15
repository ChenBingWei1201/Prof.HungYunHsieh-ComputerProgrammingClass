#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{
	int sum = 0;
	int osize = 10, nsize = 20;
	int *p = NULL, *temp = NULL;
	p = new int[osize]; // the original block ; p�쥻�u��0��9�Ӥw; 
	for (int i = 0; i < osize; i++) 
	{
		p[i] = i* i; 
		cout << setw(2) << p[i] << " ";
	}
	cout << endl;
	temp = new int[nsize]; // new block for the expanded array
	for (int i = 0; i < osize; i++) 
		temp[i] = p[i];
	delete [] p; // deallocate the old block
	p = temp; // point to the new block ; p�S�h�W�[10��19������; 
	for (int i = osize; i < nsize; i++) 
	{
		p[i] = i + 1; 
		cout << p[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < nsize; i++)
		sum += p[i];
	cout << sum;
	delete p;
	
}
