//PREPEND BEGIN
#include <iostream>
using namespace std;
int main( ){
	int *x = NULL, *y = NULL, *z = NULL;
	int a, b, m, f;
//PREPEND END

//TEMPLATE BEGIN
 //todo
	cin >> a >> b;
	x = new int[a];
	y = new int[b];
	for (int i = 0; i < a; i++)
		cin >> x[i];
	for (int i = 0; i < b; i++)
		cin >> y[i];
	if (a > b)
	{
		f = a;
		b = m;
	}
	else
	{
		f = b;
		m = a;
	}
	z = new int[f];
	
	for (int i = 0; i < m; i++)
		z[i] = x[i] + y[i];
	if (a > b)
		for (int i = m; i < f; i++)
			z[i] = x[i];
	else
		for (int i = m; i < f; i++)
			z[i] = y[i];
	
//TEMPLATE END
//APPEND BEGIN
	for(int i = 0;i < f; i++){
		cout << z[i] <<" ";
	}
	cout << "\n";


	delete [] x;
	delete [] y;
	delete [] z;	
}


//APPEND END
