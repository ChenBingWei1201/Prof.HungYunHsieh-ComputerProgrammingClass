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
/*參考第 7 頁投影片的程式碼，讓程式逐列輸出以下敘述所對應的數字：

第一列：3.14159265 的科學表示法

第二列：3.14159265 的定點表示法

第三列：3.14159265 的預設浮點數表示法

*/
