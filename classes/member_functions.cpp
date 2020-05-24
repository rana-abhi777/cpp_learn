#include <iostream>
using namespace std;

class Item {
  int number;
  float cost;
  void getData(void);
public:
  // member-function prototyping
  void setData(int a, float b);

};

void Item :: setData(int a, float b) {
  number = a;
  cost = b;

  // nesting of member function
  getData();
}

void Item :: getData(void) {
  cout << "Number : " << number << endl;
  cout << "Value : " << cost << endl;
}

int main(){
  Item a;
  a.setData(1, 40.68);
  // a.getData();

  return 0;
}
