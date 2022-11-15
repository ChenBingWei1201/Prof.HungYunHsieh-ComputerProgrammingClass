#include <iostream>
using namespace std;
int main( )
{
	int a[3] = {10, 20, 30};
	int* const p = a;
	// Instead of compiling them in the same time,
	// please execute satements below respectively 
	// so that you will get right answers;
	
	cout << ++*p << endl; // return 11 // ok
	cout << *++p << endl; // return 20 // wrong
	cout << *p++ << endl; // return 10 // wrong
	
	// extra experiments:
	//cout << *(p--) << endl;
	//cout << *p << endl;
	//cout << a[0];
	
	return 0;	
}
