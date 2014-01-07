#include <iostream>
using namespace std;

// min()関数を3通りにオーバーロードする
// 整数
inline int min(int a, int b)
{
  return a<b ? a : b;
}

// 長整数
inline long min(long a, long b)
{
  return a<b ? a : b;
}

// 倍精度浮動小数点数
inline double min(double a, double b)
{
  return a<b ? a : b;
}

int main()
{
  cout << min(-10, 10) << "\n";
  cout << min(-10.01, 100.002) << "\n";
  cout << min(-10L, 12L) << "\n";

  return 0;
}
