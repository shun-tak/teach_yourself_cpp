/* このプログラムにはエラーがある

   neg関数はdynaオブジェクトを受け取るが、
   関数内で同じpへのポインタがコピーされ、
   関数が終了するときにそのポインタが指すメモリが解放される。
   negへ渡したdyna oは後から再び使われるが、
   o.pはメモリが解放されているため、main終了時にエラーになる。
 */
#include <iostream>
#include <cstdlib>
using namespace std;

class dyna {
  int *p;
public:
  dyna(int i);
  ~dyna() { free(p); cout << "解放\n"; }
  int get() { return *p; }
};

dyna::dyna(int i)
{
  p = (int *) malloc(sizeof(int));

  if(!p) {
    cout << "メモリ割り当て失敗\n";
    exit(1);
  }
  *p = i;
}

// *ob.pの負の値を返す
// ここでob.pのメモリが解放される
int neg(dyna ob)
{
  return -ob.get();
}

int main()
{
  dyna o(-10);
  cout << o.get() << "\n";
  cout << neg(o) << "\n";

  dyna o2(20);
  cout << o2.get() << "\n";
  cout << neg(o2) << "\n";

  cout << o.get() << "\n";
  cout << neg(o) << "\n";

  return 0;
}
