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
      func();  // 4. 這個 func 印出的 x 是 11?

      return 0;
  }
