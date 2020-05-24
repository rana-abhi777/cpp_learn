#include <iostream>
using namespace std;

int main() {
  int *ptr, arr[] = {1,2,3,4,5,6};

  ptr = arr;
  cout << ptr[6];
  // for (auto ptr=arr; ptr; ptr++){
  //   cout << *ptr << " ";
  // }
  // cout << endl;
  return 0;
}
