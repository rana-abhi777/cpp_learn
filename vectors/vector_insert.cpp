#include <iostream>
using namespace std;
#include <vector>

void display(vector<int> v){
  for (auto i=v.begin(); i<v.end(); i++){
    cout << *i << " ";
  }
  cout << endl;
}
int main() {
  vector<int> v1 = {1,2,3,4,5};
  vector<int>v2 = {6,7,8,9};

  cout << "Vectors are : " << endl;
  cout << "V1 : ";
  display(v1);
  cout << "V2 : ";
  display(v2);

  // v1.insert(v1.begin(), 10);
  v1.insert(v1.end(), v2.begin(), v2.end());
  cout << "V1 : ";
  display(v1);



  return 0;
}
