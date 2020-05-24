#include <iostream>
using namespace std;

int main(){
  const int one = 1;
  const int two = 2;
  const int three = 3;
  const int four = 4;

  int x = 3;

  switch(x) {
    case one:
      cout << "value is : " << one << endl;
      break;
    case two:
      cout << "value is : " << two << endl;
      break;
    case three:
      cout << "value is : " << three << endl;
      break;
    case four:
      cout << "value is : " << four << endl;
      break;
    default:
      cout << "No matches, so going to default case!";
  }

  return 0;
}
