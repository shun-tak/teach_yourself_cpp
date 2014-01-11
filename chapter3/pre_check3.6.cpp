#include <iostream>
using namespace std;

class sample {
  int a;
  char c;
public:
  sample(int x, char ch) { a = x; c = ch; }
};

int main()
{
  sample ob(100, 'X');

  return 0;
}
