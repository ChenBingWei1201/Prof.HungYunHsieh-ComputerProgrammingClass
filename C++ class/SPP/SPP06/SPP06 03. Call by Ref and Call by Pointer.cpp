//PREPEND BEGIN
#include <iostream>
using namespace std;
//PREPEND END
//TEMPLATE BEGIN
void gcd_r(int& a, int& b)
{
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
	cout << a/min << " " << b/min;
}
void gcd_p(int* a, int* b)
{
	int  max = 0, min = 0, remain = 1;
	max = *a;
	min = *b;
	if (*b >= max)
	{
		max = *b;
		min = *a;
	}		
	while (remain != 0)
	{
		remain = max % min;
		max = min;
		if (remain != 0)
			min = remain;
	}
	cout << *a/min << " " << *b/min;
}

//TEMPLATE END
//APPEND BEGIN
int main() {
      int a,b,c;
      cin >> a >> b >> c;
      if(c==1){
          gcd_r(a,b);
    }
    else if(c==2){
        gcd_p(&a,&b);
    }
      return 0;
}
//APPEND END
