#include <iostream>
using namespace std;

void inline f1()
{
  int i;
  for(i=0; i<10; i++) cout << i;
  cout << "\n";
}

int main()
{
  f1();

  return 0;
}
