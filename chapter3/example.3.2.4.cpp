#include <iostream>
using namespace std;

class samp {
  int i;
public:
  samp(int n);
  ~samp();
  int get_i() { return i; }
};

samp::samp(int n)
{
  i = n;
  cout << "コンストラクタ呼び出し\n";
}

samp::~samp()
{
  cout << "デストラクタ呼び出し\n";
}

// o.iの2乗を返す
int sqr_it(samp o)
{
  return o.get_i() * o.get_i();
}

int main()
{
  samp a(10);
  cout << sqr_it(a) << "\n";

  return 0;
}
