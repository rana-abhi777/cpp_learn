#include <iostream>
using namespace std;
#include <vector>

int main() {

  vector<int> v1 = {1,2,3,4,5,5,6,7,8};

  // declaring iterator to a vector
  vector<int> :: iterator ptr;

  for (ptr=v1.begin(); ptr<v1.end(); ptr++) {
    cout << *(ptr) << " ";
  }
  cout << endl;
}
