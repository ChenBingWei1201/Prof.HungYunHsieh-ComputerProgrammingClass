//PREPEND BEGIN
#include <iostream>
#define MOD 1000000007
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
long long int cell(long long int R, long long int N){
        // Base Case
	if (N == 0)
		return R;
	if (N == 1)
		return R*N;
	    // Recursion
    if (N > 1)
	{
		if (N % 2 == 0)
			return (cell(R, N/2)*cell(R, N/2))% MOD;
		else
			return (cell(R, N-1)*R)% MOD;
	}	    
	//return cell(R, N-1);
}
//TEMPLATE END

//APPEND BEGIN
int main(){
	long long int I, R, N;
	cin >> I >> R >> N;

	long long int ans = I;
	ans *= cell(R, N);

	cout << ans % MOD << endl;
	return 0;
}
//APPEND END
