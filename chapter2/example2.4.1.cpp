#include <iostream>
using namespace std;

class myclass {
  int a;
public:
  myclass(int x);
  int get();
};

myclass::myclass(int x)
{
  a = x;
}

int myclass::get()
{
  return a;
}

int main()
{
  myclass ob(120);
  myclass *p;

  p = &ob;

  cout << "オブジェクトを使った値: " << ob.get() << "\n";
  cout << "ポインタを使った値: " << p->get() << "\n";

  return 0;
}
