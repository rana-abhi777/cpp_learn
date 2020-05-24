#include <iostream>
using namespace std;

int & f (& i) {
  return ++i;
}
int main(){

  int i = 20;
  int & ir = i;

  ir = 30;
  cout << "Value for i is : " << i << endl;
  f(i)
  cout << "Value for f() is : " << i << endl;
  cout << "Value for i is : " << i << endl;

}
