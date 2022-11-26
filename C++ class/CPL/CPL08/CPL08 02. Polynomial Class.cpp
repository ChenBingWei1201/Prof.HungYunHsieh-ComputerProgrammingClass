//PREPEND BEGIN
#include <iostream>
#include <iomanip>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
class Polynomial{
  public:
  // Add any member function if you need.
  Polynomial(){}
  Polynomial(int coefficient[], int n){
    // TODO 01
    m = n;
	for (int i = 0; i < m; i++)
        v[i] = coefficient[i]; // �C���Y�� 
  }
  void print(){
    // TODO 02
    for (int i = m - 1; i >= 0; i--)
	{
		if (v[i] != 0)
    		if (v[i] < 0)
    		{
    			if (i > 1)
    				cout << v[i] << "x^" << i;
    			else if (i == 1)	
    				cout << v[i] << "x";
    			else
    				cout << v[i];
			}
    		else
    		{
    			if (i > 1)
    				cout << "+" << v[i] << "x^" << i;
    			else if (i == 1)
    				cout << "+" << v[i] << "x";
    			else	
    				cout << "+" << v[i];
			}
		
	}	
    cout << endl;	
  }
  Polynomial add(Polynomial *poly2){
    // TODO 03
    Polynomial ret;
    ret.m = max(m, poly2 -> m);
    for (int i = 0; i < ret.m; i++)
		ret.v[i] = poly2 -> v[i] + v[i];
	return ret;
  }

  Polynomial multiply(Polynomial *poly2){
    // TODO 04
    Polynomial ret;
    ret.m = m + poly2 -> m - 1;
    for (int i = 0; i < poly2 -> m; i++) // b
    	for (int j = 0; j < m; j++) // a
    		ret.v[j + i] = v[j] *(poly2 -> v[i])  + ret.v[j + i];
    return ret;
  }

private:
  // Add any member variable if you need.
  int v[4096] = {0};
  int m;
  
};
//TEMPLATE END

//APPEND BEGIN
void test() {
    int n, m;
    int cmds, cmd, pid, pid2;
    int v[4096];
    cin >> n; // �� n �Ӧh���� 
    Polynomial *p = new Polynomial[n];
    for (int i = 0; i < n; i++) {
        cin >> m; // �N��h������ m �� 
        for (int j = 0; j < m; j++)
            cin >> v[j]; // �C���Y�� 
        p[i] = Polynomial(v, m);
    }
    cin >> cmds; // �� cmds �Ӿާ@ 
    for (int i = 0; i < cmds; i++) {
        cin >> cmd >> pid; // cmd �����O�A�� 1, 2, 3;  // pid ���ĴX�Ӧh����  0, 1 ,2 ...... , n-1
        if (cmd == 1) {
            p[pid].print(); // �L�X���w���h����  // print func.
        } else if (cmd == 2) {
            cin >> pid2; // �A��J�t�@�Ӧh���� 
            Polynomial ret = p[pid].add(&p[pid2]); // add func.  // 0 1
            ret.print(); //  �L�X�M                              // 2 1 3
        } else if (cmd == 3) {
            cin >> pid2; // �A��J�t�@�Ӧh���� 
            Polynomial ret = p[pid].multiply(&p[pid2]); // mutiply func.
            ret.print(); //  �L�X�n 
        }
    }
}
int main() {
    test();
    return 0;
}
//APPEND END
