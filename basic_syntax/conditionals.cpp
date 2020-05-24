#include <iostream>
using namespace std;

int main(){
  int x = 42;
  int y = 720;

  if (x > y) {
    cout << "Condition is true" << endl;
  }

  // ternary operator
  cout << "Largest among value is : " << (x>y ? x:y) << endl;

  return 0;
}
