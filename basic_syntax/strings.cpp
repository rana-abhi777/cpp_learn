// primitive strings

#include <iostream>
using namespace std;

int main() {
  char s[] = "String";

  cout << s << endl;

  for (int i=0; s[i] != 0; i++) {
    cout << "char is : " << s[i] << endl;
  }

  cout << "another way to write for loop with pointers" << endl;
  // another way to write for loop with pointers
  for (char *cp = s; *cp; ++cp) {
    cout << "char is : " << *cp << endl;
  }
  return 0;
}
