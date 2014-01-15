// このプログラムには誤りがある
#include <iostream>
using namespace std;

class myclass {
  int a, b;
public:
  void set(int i, int j) { a = i; b = j; }
  void show() { cout << a << ' ' << b << "\n"; }
};

/* このクラスはmyclassに似ているが、
   クラス名が異なるので、
   コンパイラにとってはまったく別個の型のクラスである
 */
class yourclass {
  int a, b;
public:
  void set(int i, int j) { a = i; b = j; }
  void show() { cout << a << ' ' << b << "\n"; }
};

int main()
{
  myclass o1;
  yourclass o2;

  o1.set(10, 4);

  o2 = o1; // エラー。オブジェクトの型が異なる

  o1.show();
  o2.show();

  return 0;
}
