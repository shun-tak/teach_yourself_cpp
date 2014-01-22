// オブジェクトを返す
#include <iostream>
#include <cstring>
using namespace std;

class samp {
  char s[80];
public:
  void show() { cout << s << "\n"; }
  void set(char *str) { strcpy(s, str); }
};

// samp型のオブジェクトを返す
samp input()
{
  char s[80];
  samp str;

  cout << "文字列の入力: ";
  cin >> s;

  str.set(s);

  return str;
}

int main()
{
  samp ob;

  // 返されたオブジェクトをobに代入する
  ob = input();
  ob.show();

  return 0;
}
