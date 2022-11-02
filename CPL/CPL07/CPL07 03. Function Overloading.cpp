//PREPEND BEGIN
#include<iostream>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
int my_max_index(double a[], int length = 3)
{
	    // TODO
	double max = a[0], post = 0;
	for (int i = 0; i < length; i++)
		if (a[i] >= max)
		{
			max = a[i];
			post = i + 1;
		}
		return post;
}

int my_max_index(double a[], double b[], int length_a, int length_b)
{
	    // TODO
	// double c[length_a + length_b] = {0};
	double *c =  new double[length_a + length_b];
	for (int i = 0; i < length_a; i++)
		c[i] = a[i];
	for (int i = length_a; i < length_a + length_b; i++)
		c[i] = b[i - length_a]; 
	
	double max = c[0], post = 0;
	for (int i = 0; i < length_a + length_b; i++)
		if (c[i] >= max)
		{
			max = c[i];
			post = i + 1;
		}
		return post;
}

//TEMPLATE END

//APPEND BEGIN
int main(){
    int N_a, N_b;

    cin >> N_a >> N_b;

    double *a = new double[N_a];
    double *b = new double[N_b];

    for(int i = 0; i < N_a ; i++)
        cin >> a[i];
    for(int i = 0; i < N_b ; i++)
        cin >> b[i];
    cout << "Maximum in array [a1,a2,a3] is at position: ";
    cout << my_max_index(a) << endl;
    cout << "Maximum in array [b1,b2,b3] is at position: ";
    cout << my_max_index(b) << endl;
    cout << "Maximum in array a is at position: ";
    cout << my_max_index(a, N_a) << endl;
    cout << "Maximum in array b is at position: ";
    cout << my_max_index(b, N_b) << endl;
    cout << "Maximum in array (a + b) is at position: ";
    cout << my_max_index(a, b, N_a, N_b) << endl;

    delete [] a;
    delete [] b;

    return 0;
}
//APPEND END


