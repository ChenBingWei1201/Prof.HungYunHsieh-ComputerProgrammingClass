#include <iostream>
using namespace std;

void func() {
      static int x = 10;
      ++x;
      cout << x << endl;
  }

  int main() {
      func();
      func();
      func();  // 4. �o�� func �L�X�� x �O 11?

      return 0;
  }
