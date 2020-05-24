#include <iostream>
using namespace std;

unsigned long long int factorial(unsigned int n) {
  if(n<2) return 1;
  return factorial(n-1) * n;
}

int main() {
  unsigned int n;
  unsigned long long int calc_fact;
  cout << "Enter the number : " << endl;
  cin >> n;
  calc_fact = factorial(n);
  cout << "factorial value is : " << calc_fact << endl;

  return 0;
}
