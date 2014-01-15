// このプログラムにはエラーがある

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
  char *p;
  int len;
public:
  strtype(char *ptr);
  ~strtype();
  void show();
};

strtype::strtype(char *ptr)
{
  len = strlen(ptr);
  p = (char *) malloc(len+1);
  if(!p) {
    cout << "メモリ割り当てエラー\n";
    exit(1);
  }
  strcpy(p, ptr);
}

strtype::~strtype()
{
  cout << "pを解放する\n";
  free(p);
}

void strtype::show()
{
  cout << p << " - 長さ: " << len << "\n";
}

int main()
{
  strtype s1("This is a test."), s2("I like C++.");

  s1.show();
  s2.show();

  // s1をs2に代入する。これによってエラーが発生する
  /* 理由: s1をs2に代入したことによって、
     s2のpが元々指していたメモリがs1と同じメモリを指すようになる。
     これによって同じメモリがデストラクタによって二度解放され、
     実行時エラーが発生する。
     さらにs2が元々指していたメモリが解放されないという問題が生じる。
  */
  s2 = s1;

  s1.show();
  s2.show();

  return 0;
}
