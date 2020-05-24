#include <iostream>
using namespace std;
#include <vector>

void display_vector(vector<int> v) {
  for (auto i=v.begin(); i != v.end(); ++i) {
    cout << *(i) << " ";
  }
  cout << endl;
}

int main(){
  vector<int> v1;
  cout << "Size of vector before insert : " << v1.size() << endl;
  //insert elements into vector
  cout << "Enter 5 elements to insert into vector: " << endl;
  for (int i=0; i<5; i++) {
    int x;
    cin >> x;
    v1.push_back(x);
  }

  cout << "Size of vector after insert : " << v1.size() << endl;
  cout << sizeof(v1) / sizeof(v1[0]) << endl;

  cout << ".begin() returns : " << *(v1.begin()) << endl;
  cout << ".end() returns : " << *(v1.end()) << endl;


  // display elements of vector
  display_vector(v1);

  return 0;
}
