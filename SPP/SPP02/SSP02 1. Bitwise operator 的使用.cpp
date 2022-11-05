#include <iostream>
using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    cout << "Before swap, x = " << x << ", y = " << y << ".\n";
	x = x^y;
	y = y^x;
	x = x^y;
	cout << "After swap, x = " << x << ", y = " << y << ".\n";

    return 0;
}
