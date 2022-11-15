//PREPEND BEGIN
#include <iostream>
#include <iomanip>
using namespace std;
int product(int a, int b);
double divide(int a, int b);
void sum(int a, int b);
int main(){
	int a,b;
	cin >>a>>b;
	int p,c;
	double d;
	p = product(a, b);
	d = divide(a, b);	
        cout << p <<endl;
        cout << fixed << setprecision(2) << d <<endl;
    //cout.unsetf(ios::fixed) ;
	sum(a, b); 
	return 0;
}
//PREPEND END
//TEMPLATE BEGIN
  
  //todo
int product(int a, int b)
{
	return a*b;
}
double divide(int a, int b)
{
	double d = (double)a/(double)b;
	return d;
}
void sum(int a, int b)
{
	int s = 0;
	s = a + b;
	cout << s;
}

//TEMPLATE END
//APPEND BEGIN
//APPEND END
