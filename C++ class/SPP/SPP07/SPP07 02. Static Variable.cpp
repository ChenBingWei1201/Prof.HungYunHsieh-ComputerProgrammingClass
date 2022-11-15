//PREPEND BEGIN
#include <iostream>
using namespace std;
void gcd(int b) {
//PREPEND END
//TEMPLATE BEGIN 
	static int max_gcd = b, c = 0;
	int max = max_gcd, min = b;
	if (min)
        while((max %= min) && (min %= max))
			;
	if (c == 0)
	{
		if(max_gcd == b)
			;
	}
	else
	{
		cout << max + min << endl;
		
	}
	max_gcd = max + min;
	c++;		
//TEMPLATE END
//APPEND BEGIN
}
int main() {
	int n,i,*a;
	cin >>n;
	a = new int[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		gcd(a[i]);		
	}
	delete [] a;
    return 0;
}
//APPEND END
