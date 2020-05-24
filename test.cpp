#include <iostream>
using namespace std;
#include <vector>


void display(vector<int> v){
  for (auto i=v.begin(); i<v.end(); i++){
    cout << *i << " ";
  }
  cout << endl;
}

int main(){
  vector<int> nums = {3,1,2,4};
  int size = nums.size();

  vector<int> even, odd;

  for (int i=0; i<size; i++) {
    if(nums[i]%2 == 0) {
      even.push_back(nums[i]);
    } else {
      odd.push_back(nums[i]);
    }
  }

  // combine both
  even.insert(even.end(), odd.begin(), odd.end());
  display(even);

  return 0;
}
