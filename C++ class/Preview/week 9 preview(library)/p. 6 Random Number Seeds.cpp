#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	int seed, c = 0;
	cout << "Preset random sequence:\t";
	for (int i = 1; i <= 10; i++)
		cout << setw(3) << rand()% 10 + 1; // 確保輸出的亂數在 1 - 10間 
	cout << endl;
	while (1) 
	{
		cout << "\nEnter a new seed: ";
		cin >> seed;  
		srand(seed);  // 改變傳入seed的值,進而改變亂數序列 
		cout << "\nNew random sequence:\t";
		for (int i = 1; i <= 10; i++) 
			cout << setw(3) << rand() % 10 + 1;
	}
}
