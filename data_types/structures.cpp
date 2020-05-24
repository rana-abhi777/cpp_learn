#include <iostream>
using namespace std;

struct Employee{
  int id;
  const char * name;
  const char * role;

};

int main(){
  Employee joe = {1, "Joe", "IT-Engineer"};
  // pointer to structure
  Employee * e = &joe;

  cout << "Employee details for Joe are :" << endl;
  cout << "Emp id : " << joe.id << ", Emp name : " << joe.name << ", Emp role : " << joe.role << endl;

  // calling details using pointer to structure
  cout << "Pointer details for Joe are: " << endl;
  cout << "Emp id : " << e->id << ", Emp name : " << e->name << ", Emp role : " << e->role << endl;
  
  return 0;
}
