#include <iostream>
using namespace std;

class myclass {
  int i, j;
public:
  myclass(int a, int b);
  void show();
};

myclass::myclass(int a, int b)
{
  i = a;
  j = b;
}

void myclass::show()
{
  cout << i << ' ' << j << "\n";
}

int main()
{
  int x, y;

  cout << "2つの整数を入力: ";
  cin >> x >> y;

  // 変数を使用してmyclassオブジェクトを作成する
  myclass ob(x, y);
  ob.show();

  return 0;
}
