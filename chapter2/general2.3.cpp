#include <iostream>
using namespace std;

class dice {
public:
  dice() { srand(static_cast<unsigned int>(time(NULL))); }
  int roll() { return rand() % 6 + 1; }
};

int main()
{
  dice d;
  for(int i=0; i<10; i++) cout << d.roll() << "\n";

  return 0;
}
