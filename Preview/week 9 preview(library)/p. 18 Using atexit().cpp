#include <iostream>
#include <cstdlib>
using namespace std;
void fnExit1() 
{
	cout << "Exit function 1" << endl; 
} 
void fnExit2() 
{ 
	cout << "Exit function 2" << endl; 
}
int main( )
{
	atexit(fnExit1); // 註冊離開要做的事 
	atexit(fnExit2);
	cout << "Main program" << endl;
	return 0;
	// 結束之後才呼叫前面先註冊好的東西 (call back)
	// 先註冊後呼叫，後註冊先呼叫 
	/*
	Main program 
	Exit function 2
	Exit function 1
	*/
}
