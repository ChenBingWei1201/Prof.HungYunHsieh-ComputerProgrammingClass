#include <iostream>
using namespace std;
int main( )
{
	int a[3] = {10, 20, 30};
	int* p = a;
	// Instead of compiling them in the same time,
	// please execute satements below respectively 
	// so that you will get right answers;
	
	cout << ++*p << endl; // return 11
	cout << *++p << endl; // return 20
	cout << *p++ << endl; // return 10
	
	// extra experiments:
	//cout << *(p--) << endl;
	//cout << *p << endl;
	//cout << a[0];
	
	return 0;	
}
