#include <iostream>
using namespace std;

class A {
public:
  int m;

  void show(void);
};

void A :: show(void) {


  cout << "Value for m is : " << m;
}

int main() {
  A a;
  a.m = 20;
  cout << "pointer to a member variable" << endl;
  int A :: * ip = &A :: m;
  cout << a.*ip << endl;
  cout << a.m << endl;

  cout << "pointer to an object" << endl;
  A *ap = &a;
  cout << ap->m << endl;
  cout << a.m << endl;
  cout << ap->*ip << endl;

  cout << "defining a new pointer object" << endl;
  A *ipp;
  ipp->m = 40;
  cout << ipp->m << endl;


  return 0;
}
