#include <iostream>
using namespace std;

int main()
{
	char array[100] = {'0'};
	cin.getline(array, sizeof(array));
	for (int i = 0; i < 100; i++)
		if (array[i] >= 97)
			array[i] -= 32;
	cout << array;
	return 0;
}
// 97 - 65 = 32
