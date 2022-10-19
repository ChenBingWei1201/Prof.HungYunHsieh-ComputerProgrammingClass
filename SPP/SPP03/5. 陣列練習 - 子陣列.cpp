#include <iostream>
using namespace std;

int main() {
    int A[10][10];

    for (int i = 0; i < 10; ++i) 
	{
        for (int j = 0; j < 10; ++j)
		{
            cin >> A[i][j];
        }
    }

    int i, j, m, n;
    cin >> i >> j >> m >> n;
//PREPEND END

//TEMPLATE BEGIN

	int B[m][n];
    for(int k = 0; k < m; ++k)
	{
		for(int l = 0; l < n; ++l)
    	{
			B[k][l] = A[k + i][l + j]; 
			cout << B[k][l]<<" ";
    		/*if(l < n)
				if(l == n - 1)
    				cout << endl;
    			else
    				cout << " ";*/
		}	
		cout << "\n";
	}
		

//TEMPLATE END

//APPEND BEGIN
    return 0;
}
//APPEND END






/*
½d¨Ò¿é¤J:
 0  1  2  3  4  5  6  7  8  9
10 11 12 13 14 15 16 17 18 19
20 21 22 23 24 25 26 27 28 29
30 31 32 33 34 35 36 37 38 39
40 41 42 43 44 45 46 47 48 49
50 51 52 53 54 55 56 57 58 59
60 61 62 63 64 65 66 67 68 69
70 71 72 73 74 75 76 77 78 79
80 81 82 83 84 85 86 87 88 89
90 91 92 93 94 95 96 97 98 99
1 2 2 2 
*/ 
