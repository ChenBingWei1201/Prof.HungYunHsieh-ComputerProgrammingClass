#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	int seed, c = 0;
	cout << "Preset random sequence:\t";
	for (int i = 1; i <= 10; i++)
		cout << setw(3) << rand()% 10 + 1; // �T�O��X���üƦb 1 - 10�� 
	cout << endl;
	while (1) 
	{
		cout << "\nEnter a new seed: ";
		cin >> seed;  
		srand(seed);  // ���ܶǤJseed����,�i�ӧ��ܶüƧǦC 
		cout << "\nNew random sequence:\t";
		for (int i = 1; i <= 10; i++) 
			cout << setw(3) << rand() % 10 + 1;
	}
}
