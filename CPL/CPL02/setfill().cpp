#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setfill, std::setw
using namespace std;

int main () 
{
	
    cout << 77 << endl;
	cout << setfill (' ') << setw (16);
    cout << 77 << endl;
    return 0;
}
