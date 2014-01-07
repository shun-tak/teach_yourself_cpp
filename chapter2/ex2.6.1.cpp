#include <iostream>
using namespace std;

// myabs関数を3通りにオーバーロードする
// 整数
inline int myabs(int n)
{
  cout << "整数";
  return n<0 ? -n : n;
}

// 長整数
inline long myabs(long n)
{
  cout << "長整数";
  return n<0 ? -n : n;
}

// 倍精度浮動小数点
inline double myabs(double n)
{
  cout << "倍精度浮動小数点";
  return n<0 ? -n : n;
}

int main()
{
  cout << "-10の絶対値: " << myabs(-10) << "\n";
  cout << "-10Lの絶対値: " << myabs(-10L) << "\n";
  cout << "-10.01の絶対値: " << myabs(-10.01) << "\n";
  return 0;
}
