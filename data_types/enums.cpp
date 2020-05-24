#include <iostream>
using namespace std;

int main(){

  enum card_rank : uint8_t { ACE=1, DEUCE=2, JACK=11, QUEEN, KING };


  cout << ACE << endl;
  cout << DEUCE << endl;
  cout << JACK << endl;
  cout << QUEEN << endl;
  cout << KING << endl;
  
  return 0;
}
