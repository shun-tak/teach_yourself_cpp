#include <iostream>
using namespace std;

class samp {
  int i, j;
public:
  // インラインコンストラクタ
  samp(int a, int b) { i = a; j = b; }
  int divisible() { return !(i%j); }
};

int main() {
  samp ob(10, 2);
  if (ob.divisible()) cout << "10は2で割り切れる\n";

  return 0;
}
