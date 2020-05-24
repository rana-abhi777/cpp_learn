#include <iostream>
using namespace std;

class C1{
  int i;
public:
  int setValue(int value) {
    i = value;
  }
  int getValue() {
    return i;
  }
};

int main(){
  int i = 50;
  C1 obj;

  obj.setValue(i);
  cout << "Value in class C1 for i is : " << obj.getValue() << endl;

  return 0;
}
