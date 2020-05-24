#include <iostream>
using namespace std;

void func() {
  cout << "This is func()" << endl;
}

int main() {
  void (*pfunc)() = func;
  cout << "This is main()" << endl;
  pfunc();

  return 0;
}
