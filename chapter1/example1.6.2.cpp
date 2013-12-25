#include <iostream>
using namespace std;

int sum(int a, int b)
{
  return a+b;
}

int main()
{
  int a, b, c;

  cout << "2つの数字を入力: ";
  cin >> a >> b;
  c = sum(a, b);
  cout << "合計: " << c << "\n";

  return 0;
}
