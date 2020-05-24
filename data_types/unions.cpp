#include <iostream>
using namespace std;

union ipv4 {
  int i32;
  struct {
    int a;
    int b;
    int c;
    int d;
  } octets;
};

int main() {
  union ipv4 addr;
  addr.octets = { 192, 168, 1, 1 };
  cout << "Address is : " << addr.octets.a << "." << addr.octets.b << "." << addr.octets.c << "." << addr.octets.d << endl;
  cout << "Address in 32 bit is : " << addr.i32 << endl;
  // printf("addr is %d.%d.%d.%d is %08x\n",
  //         addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32 );

  return 0;
}
