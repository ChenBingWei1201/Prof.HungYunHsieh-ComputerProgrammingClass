#include <iostream>
using namespace std;

void func() {
      static int x;
      ++x;
  }
  int main() {
      int x = 7;

      func();

      cout << x << endl; // 5. �o�� x �O 8?

      return 0;
  }
