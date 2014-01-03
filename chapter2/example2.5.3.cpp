#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct strtype {
  strtype(char *ptr);
  ~strtype();
  void show();
private:
  char *p;
  int len;
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

  return 0;
}
