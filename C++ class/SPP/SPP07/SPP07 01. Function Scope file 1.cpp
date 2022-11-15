#include <iostream>
using namespace std;

int x = 1;
int main() {
  int x = 5;
  cout << x << endl;  // 1. 這裡的 x 是 5?

  // 2. 如果要在這裡印出 global 的 x，要這樣用?
  cout << ::x << endl;

  return 0;
}
