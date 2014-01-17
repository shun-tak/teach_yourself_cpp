/*
  このプログラムでは、sqr_it()関数にオブジェクトのアドレスを渡す
  関数を呼び出す際にオブジェクトのアドレスを渡すと、
  関数内でオブジェクトの値を修正できる
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
   sqr_it()関数を呼び出す際に使われた
   オブジェクトに影響する
*/
void sqr_it(samp *o)
{
  o->set_i(o->get_i() * o->get_i());

  cout << "iのコピーの値は " << o->get_i() << "\n";
}

int main()
{
  samp a(10);

  sqr_it(&a); // aのアドレスをsqr_it()関数に渡す

  cout << "今、main()は変更された: ";
  cout << a.get_i() << "\n";

  return 0;
}
