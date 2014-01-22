// オブジェクトを返すことによってエラーが生成される
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class samp {
  char *s;
public:
  samp() { s = '\0'; }
  ~samp() { if(s) free(s); cout << "sを解放する\n"; }
  void show() { cout << s << "\n"; }
  void set(char *str);
};

// 文字列をロードする
void samp::set(char *str)
{
  s = (char *) malloc(strlen(str)+1);
  if(!s) {
    cout << "メモリ割り当てエラー\n";
    exit(1);
  }
  strcpy(s, str);
}

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
