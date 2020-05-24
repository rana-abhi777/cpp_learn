// primitive arrays
#include <iostream>
using namespace std;

int main() {
  int ia[5];
  *ia = 1;

  cout << "Array is : " << *ia << endl;

  int *ip = ia;
  *ip = 2;
  // updating second element of array
  ++ip;
  *ip = 10;
  // updating third element of array with pointer notation
  *(++ip) = 20;

  cout << "Updated array is : " << *ia << endl;

  return 0;
}
