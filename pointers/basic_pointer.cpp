#include <iostream>
using namespace std;

int main() {

  int *ptr, var;
  var = 20;
  ptr = &var;

  cout << "Variable value : " << var << endl;
  cout << "Variable address : " << &var << endl;
  cout << "Pointer value : " << ptr << endl;
  cout << "Pointer points to value : " << *ptr << endl;

  var++;
  cout << var << endl;
  cout << *ptr << endl;

  return 0;
}
