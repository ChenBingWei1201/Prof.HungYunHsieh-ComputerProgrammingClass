//PREPEND BEGIN
#include <iostream>
using namespace std;

int main() {
    int x, y, z, w;
    int p[500][500];
    int *q, **r;
    int i, j;

    cin >> x >> y >> z >> w;

    for (i = 0; i < x; ++i)
        for (j = 0; j < y; ++j)
            cin >> p[i][j];
//PREPEND END

//TEMPLATE BEGIN
	// TODO
	// write your code here.
	int k = 0;
	q = new int[x*y];
	for (i = 0; i < x; i++)
		for (j = 0; j < y; j++)
			{
				q[k] = p[i][j];
				k++;
			}
	k = 0;
	r = new int*[z];
	for (i = 0; i < z; i++)
		r[i] = new int[w];
	
	for (i = 0; i < z; i++)
		for (j = 0; j < w; j++)
		{
			r[i][j] = q[k];
			k++;
		}	
	
//TEMPLATE END

//APPEND BEGIN
    cout << "1D Array(q): " << endl;
    for (i = 0; i < x*y; ++i)
        cout << q[i] << " ";
    cout << endl;

    cout << "2D Array(r): " << endl;
    for (i = 0; i < z; ++i)
    {
        for (int j = 0; j < w; ++j)
            cout << r[i][j] << " ";
        cout << endl;
    }

    return 0;
}
//APPEND END
