#include <iostream>
using namespace std;
int main( )
{
	cout << scientific << 3.14159265 << "\n";
	cout << fixed << 3.14159265 << "\n";
	cout.unsetf(ios::scientific|ios::fixed);
	cout << 3.14159265 << "\n";
	
 	return 0;
	
}
/*�ѦҲ� 7 ����v�����{���X�A���{���v�C��X�H�U�ԭz�ҹ������Ʀr�G

�Ĥ@�C�G3.14159265 ����Ǫ�ܪk

�ĤG�C�G3.14159265 ���w�I��ܪk

�ĤT�C�G3.14159265 ���w�]�B�I�ƪ�ܪk

*/
