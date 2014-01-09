#include <iostream>
using namespace std;

class line {
  int len;
public:
  line(int a);
};

line::line(int a) {
  len = a;
  int i;
  for(i=0; i<len; i++) cout << "*";
  cout << "\n";
}

int main() {
  line l1(1), l2(2);

  return 0;
}
