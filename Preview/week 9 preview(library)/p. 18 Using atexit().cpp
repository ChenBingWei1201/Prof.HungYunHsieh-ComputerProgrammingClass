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
	atexit(fnExit1); // ���U���}�n������ 
	atexit(fnExit2);
	cout << "Main program" << endl;
	return 0;
	// ��������~�I�s�e�������U�n���F�� (call back)
	// �����U��I�s�A����U���I�s 
	/*
	Main program 
	Exit function 2
	Exit function 1
	*/
}
