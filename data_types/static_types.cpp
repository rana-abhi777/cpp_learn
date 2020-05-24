#include <iostream>
using namespace std;

class S {
public:
  int static_value() {
    static int x = 7;
    return ++x;
  }
};

int func() {
  static int i=10; // now variable's scope is global
  return ++i;
}

int main(){
  int i = 20;
  cout << "Value for i is : " << i << endl;

  // calling fun()
  i = func();
  cout << "value now is : " << i << endl;
  i = func();
  cout << "value now is : " << i << endl;

  // calling class S
  S a;
  S b;
  S c;
  cout << "a value is : " << a.static_value() << endl;
  cout << "b value is : " << b.static_value() << endl;
  cout << "c value is : " << c.static_value() << endl;


  return 0;
}
