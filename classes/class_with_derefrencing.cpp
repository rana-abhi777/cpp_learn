#include <iostream>
using namespace std;
#include <string>

class Student {
public:
  int rollno;
  string name;

};

int main() {
  Student *a = NULL;
  Student *b = NULL;

  a = new Student();
  b = new Student();

  a->rollno = 10;
  a->name = "abhisek";

  b->rollno = 20;
  b->name = "rana";

  cout << "Student A:" << endl;
  cout << "rollno : " << a->rollno << ", name : " << a->name << endl;
  cout << "Student B:" << endl;
  cout << "rollno : " << b->rollno << ", name : " << b->name << endl;

  return 0;
}
