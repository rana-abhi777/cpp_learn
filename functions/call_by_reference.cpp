#include <iostream>
using namespace std;

void f(int * p){
  ++(*p);
}

int main(){
  int i = 20;
  f(&i);
  cout<<i<<endl;

  return 0;
}
