/*
  オブジェクトは、ほかの仮引数と同様、値によって渡される
  したがって、関数の内部で仮引数に変更を加えても、
  呼び出し時に使用したオブジェクト自体には何の影響も無い
 */
#include <iostream>
using namespace std;

class samp {
  int i;
public:
  samp(int n) { i = n; }
  void set_i(int n) { i = n; }
  int get_i() { return i; }
};

/* o.iをその2乗に設定する
   ただし、sqr_it()を呼び出す際に使われた
   オブジェクトには何の影響もない
*/
void sqr_it(samp o)
{
  o.set_i(o.get_i() * o.get_i());

  cout << "iのコピーの値は " << o.get_i() << "\n";
}

int main()
{
  samp a(10);
  sqr_it(a);

  cout << "しかし、a.iはmain()で変更されない: ";
  cout << a.get_i() << "\n";

  return 0;
}
