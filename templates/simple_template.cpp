#include <iostream>
using namespace std;

template <typename T>
T maxof (T a, T b) {
  return (a > b ? a : b);
}

int main(){
  int m = maxof<int>(10,20);

  cout << "Max is : " << m << endl;

  return 0;
}
