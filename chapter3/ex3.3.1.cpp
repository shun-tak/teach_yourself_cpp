#include <iostream>
using namespace std;

class who {
  char name[80];
public:
  who(const char *x) { strcpy(name, x); cout << name << "のコンストラクタ\n"; }
  ~who() { cout << name << "のデストラクタ\n"; }
};

who make_who()
{
  char ch1[80] = "return_who";
  char ch2[80] = "only_used_make_who_inside";

  cout << "make_whoの内部でwhoオブジェクトを生成\n";
  who tmp1 = who(ch1);
  who tmp2 = who(ch2);
  return tmp1;
}

int main()
{
  char x[80] = "test";
  who ob1(x);

  cout << "make_whoを呼び出す\n";
  who ob2 = make_who();

  return 0;
}
