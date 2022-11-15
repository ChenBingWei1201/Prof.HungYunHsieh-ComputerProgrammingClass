//PREPEND BEGIN
#include <iostream>
using namespace std;

int N;
int circle[1000] = {0};
//PREPEND END

//TEMPLATE BEGIN
void pop_one() {
    // todo
    static int c = 1, i = 0;
    static int *p = &circle[0];
    
    // cout << i << endl;
    
    cout << "step " << c << ": pop " << circle[i] << endl;
    N--;
    for (int j = i; j < 1000; j++)
    {
    	circle[j] = circle[j]^circle[j+1];
    	circle[j+1] = circle[j]^circle[j+1];
    	circle[j] = circle[j]^circle[j+1];
	}
	c++;
	i = *p;
	if (i >= N)
    {
    	if (i % N == 0)
    		p = &circle[i];
    	
	}
	else
		p = &circle[i];	
    // cout << circle[*p] << endl; 
    
}
//TEMPLATE END

//APPEND BEGIN
int main() {
    cin >> N;

    for(int i = 0; i < N; ++i) {
        cin >> circle[i];
    }

    int temp_N = N;
    for(int i = 0; i < temp_N; ++i) {
        pop_one();
    }

    return 0;
}
//APPEND END
