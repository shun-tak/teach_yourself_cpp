#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
  char *p;
  int len;
public:
  strtype(char *ptr);
  ~strtype() { free(p); }
  void show() { cout << p << " - 長さ: " << len << "\n"; }
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

int main()
{
  strtype s1("This is a test."), s2("I like C++.");
  s1.show();
  s2.show();

  return 0;
}
