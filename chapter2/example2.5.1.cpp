#include <iostream>
#include <cstring>
using namespace std;

// structを使用してクラス型を定義する
struct st_type {
  st_type(double b, char *n);
  void show();
private:
  double balance;
  char name[40];
};

st_type::st_type(double b, char *n)
{
  balance = b;
  strcpy(name, n);
}

void st_type::show()
{
  cout << "名前: " << name;
  cout << ": $" << balance;
  if(balance<0.0) cout << "***";
  cout << "\n";
}

int main()
{
  st_type acc1(100.12, "Johnson");
  st_type acc2(-12.34, "Hedricks");

  acc1.show();
  acc2.show();

  return 0;
}
