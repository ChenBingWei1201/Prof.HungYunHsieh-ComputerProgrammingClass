//PREPEND BEGIN
#include <iostream>
//#include <string>
using namespace std;


int main() {
    char c;

    cin >> c;
	const char *week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
//  string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	
	// �W���ΤU���ҥi�A�u�O�U���n�A�hinclude <string>�A���O�W�����h���� �C 
//PREPEND END

//TEMPLATE BEGIN
    enum Monkey {
        c1, h2, m3, t4, d5, s6, b7
    };
    Monkey day;
    switch (c)
    {
    	case 'c':
    		day = c1;
    		break;
    	case 'h':
    		day = h2;
    		break;
    	case 'm':
    		day = m3;
    		break;
    	case 't':
    		day = t4;
    		break;
    	case 'd':
    		day = d5;
    		break;
    	case 's':
    		day = s6;
    		break;
    	case 'b':
    		day = b7;
    		break;
	}	
    	
	
	// todo

//TEMPLATE END

//APPEND BEGIN
    cout << week[day] << endl;

    return 0;
}
//APPEND END
