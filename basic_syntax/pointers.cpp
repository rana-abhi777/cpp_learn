#include <iostream>
using namespace std;

int main(){
  int x = 7;
  int y = 42;
  int *ip = &y;

  cout << x << endl;
  cout << y << endl;
  cout << *ip << endl;
  cout << ip << "\n" << &y << endl;
}
