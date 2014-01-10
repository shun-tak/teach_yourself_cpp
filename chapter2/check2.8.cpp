/* 次の共用体が有効かどうか考えなさい

   これは無名共用体と呼ばれ、
   fとbitsは有効にメモりアドレスを共有する。
   ただし、その変数が示す値は異なる。
 */

#include <iostream>
using namespace std;

int main()
{
  union {
    float f;
    unsigned int bits;
  };

  f = 0.25;
  cout << "f: " << f << "\n";
  cout << "bits: " << bits << "\n";

  return 0;
}
