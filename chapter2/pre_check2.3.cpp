#include <iostream>
using namespace std;

int rotate(int a);
long rotate(long a);

int main()
{
  cout << "1234567890<<1 = " << (1234567890<<1) << "\n";
  cout << "1234567890L<<1 = " << (1234567890L<<1) << "\n";

  cout << "int rotate(1234567890) = " << rotate(1234567890) << "\n";
  cout << "long rotate(1234567890L) = " << rotate(1234567890L) << "\n";

  return 0;
}

int rotate(int a)
{
  int x;
  if (a & 0x8000000) x = 1;
  else x = 0;

  return (a<<1)+x;
}

long rotate(long a)
{
  int x;
  if (a & 0x80000000) x = 1;
  else x = 0;

  return (a<<1)+x;
}
