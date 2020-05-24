#include <iostream>
using namespace std;

int main() {
  int x = 7;
  int *ip = &x;
  int &y = x;

  cout << "The value for x : " << x << endl;
  cout << "The value that pointer ip holds is : " << *ip << endl;
  cout << "The value reference variable y : " << y << endl;
  cout << "The address of reference variable y : " << &y << endl;
  cout << "The address of x : "&x << endl;
  cout << "The address that pointer ip holds : "ip << endl;

  return 0;
}
