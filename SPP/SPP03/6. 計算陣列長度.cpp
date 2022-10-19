#include <iostream>
using namespace std;

int main() {
    int arr[15] = {0};
//PREPEND END

//TEMPLATE BEGIN
	//cout << "len = " << (long(&arr + 1) - long(&arr))/sizeof(int) << endl;
    cout << "len = " << sizeof(arr)/sizeof(arr[0]) << endl;
//TEMPLATE END

//APPEND BEGIN
    return 0;
}
