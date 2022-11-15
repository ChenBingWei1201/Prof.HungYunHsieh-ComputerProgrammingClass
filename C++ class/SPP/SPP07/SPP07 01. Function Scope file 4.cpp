#include <iostream>
using namespace std;

void func() {
      static int x;
      ++x;
  }
  int main() {
      int x = 7;

      func();

      cout << x << endl; // 5. ³o¸Ì x ¬O 8?

      return 0;
  }
