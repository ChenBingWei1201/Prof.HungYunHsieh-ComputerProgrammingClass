//PREPEND BEGIN
#include <iostream>
using namespace std;

namespace first { int num = 5; }
namespace second {int num = 10; }
namespace second {double var = 3.2;}


int main() {
//PREPEND END

//TEMPLATE BEGIN

// todo
// �Щw�q�@���ܼ� num�A�åO num = (namespace first �U�� num)
// �Щw�q�@�ӱ`�� con�A�åO con = (namespace second �U�� var ���H namespace first �U�� num)

//TEMPLATE END

//APPEND BEGIN
    int & num = first::num;
	int con = second::var* first::num;
	
	first::num = 100;

    cout << num << "\n";
    cout << con << "\n";

    return 0;
}
//APPEND END

