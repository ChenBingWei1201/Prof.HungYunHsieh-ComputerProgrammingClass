#include <iostream>
using namespace std;

int main()
{
	int s0[10] = {1};
	const char s1[10] = "hello";
	const char s2[10] = {'h', 'e', 'l', 'l', 'o'};
	const char *s3 = "hello";
	const char *s4[10] = {"h", "e", "l", "l", "o"}; 
	for(int i = 0; i < 10; i++)
	{
		cout << s1[i];
	}
	cout << endl;
	cout << s1[0] << " " << s2[0] << " " << *s3 << " " << s4[0] << endl;
	cout << s1 << " " << s2  << " " << s3 << " " << s4[0] << " " << *s0;
	return 0;
}

