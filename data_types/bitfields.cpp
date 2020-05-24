#include <iostream>
using namespace std;

// bitfields are defining user defined bits for a variable
// for example below structure we have defined 1 byte for bool and 4 bytes for unsigned int
struct preferences {
  bool likesMusic : 1;
  bool hasHair : 1;
  bool hasInternet : 1;
  bool hasDinasour : 1;
  unsigned int numberOfChildren : 4;
};

int main() {
  struct preferences homer;
  homer.likesMusic = true;
  homer.hasHair = false;
  homer.hasInternet = true;
  homer.hasDinasour = false;
  homer.numberOfChildren = 4;

  cout << "Size of Int : " << sizeof(int) * 8 << " bits" << endl;
  cout << "Size of struct : " << sizeof(homer) * 8 << " bits" << endl;

  if(homer.likesMusic) cout << "Homer likes music" << endl;
  if(homer.hasHair) cout << "Homer has hair" << endl;
  if(homer.hasInternet) cout << "Homer has internet" << endl;
  if(homer.hasDinasour) cout << "Homer has dinasour" << endl;
  cout << "Homer has " << homer.numberOfChildren << " children" << endl;

  return 0;
}
