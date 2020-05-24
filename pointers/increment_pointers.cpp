#include <iostream>
using namespace std;

int main() {

  int *ptr, var[2];
  ptr = var;
  *ptr = 30;
  ptr++;
  *ptr = 40;

  for (int i=0; i<2; i++) {
    cout << var[i] << " ";
  }
  cout << endl;


}
