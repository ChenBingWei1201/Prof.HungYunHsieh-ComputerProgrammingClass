//PREPEND BEGIN
#include <iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
int gcd(int a, int b) {
  // Please find greatest common divisor of a and b
  int  max = 0, min = 0, remain = 1;
	max = a;
	min = b;
	if (b >= max)
	{
		max = b;
		min = a;
	}		
	while (remain != 0)
	{
		remain = max % min;
		max = min;
		if (remain != 0)
			min = remain;
	}
	return min;
	
}
//TEMPLATE END

//APPEND BEGIN
int main() {
  int a,b;
  cin >> a >> b;
  cout << gcd(a,b) << endl;
  return 0;
}
//APPEND END
