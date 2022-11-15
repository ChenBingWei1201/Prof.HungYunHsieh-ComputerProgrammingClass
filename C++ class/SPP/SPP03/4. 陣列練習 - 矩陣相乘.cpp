#include <iostream>
using namespace std;

int main() {
    int A[2][2];
    int B[2][2];
    int C[2][2] = {0};

    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cin >> B[i][j];
        }
    }
//PREPEND END

//TEMPLATE BEGIN
	for(int i = 0; i < 2; ++i) 
	{
        for(int j = 0; j < 2; ++j) 
		{
            for(int k = 0; k < 2; ++k)
				C[i][j] += A[i][k]*B[k][j];
        }
    }
    

//TEMPLATE END

//APPEND BEGIN
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 2; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
