#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void print_vector(vector<int> v){
  vector<int>:: iterator ptr;
  for (ptr=v.begin(); ptr<v.end(); ptr++){
    cout << *(ptr) << " ";
  }
  cout << endl;
}
int main(){
  vector<int> v = {12, 11, 2, 3, 1};

  // sorting vector
  sort(v.begin(), v.end());
  print_vector(v);

  return 0;

}
