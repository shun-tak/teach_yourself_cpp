/* 練習問題では関数fのプロトタイプを記述していないのでコンパイルできない
 *
 */

#include <iostream>
using namespace std;

void f();

int main()
{
  f();
  return 0;
}

void f()
{
  cout << "うまく動く\n";
}
