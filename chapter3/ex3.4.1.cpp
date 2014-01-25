#include <iostream>
using namespace std;

class pr1;
class pr2;

class pr1 {
  int printing;
public:
  pr1() { printing = 0; }
  void set_print(int status) { printing = status; }
  friend bool inuse(pr1 pr1, pr2 pr2);
};

class pr2 {
  int printing;
public:
  pr2() { printing = 0; }
  void set_print(int status) { printing = status; }
  friend bool inuse(pr1 pr1, pr2 pr2);
};

bool inuse(pr1 pr1, pr2 pr2)
{
  if(pr1.printing != 0) return true;
  if(pr2.printing != 0) return true;

  return false;
}

void out(pr1 pr1, pr2 pr2)
{
  if(inuse(pr1, pr2)) cout << "プリンターは使用中です\n";
  else cout << "プリンターは使用可能です\n";
}

int main()
{
  pr1 pr1;
  pr2 pr2;

  out(pr1, pr2);

  pr1.set_print(1);
  out(pr1, pr2);

  pr1.set_print(0);
  pr2.set_print(1);
  out(pr1, pr2);

  pr2.set_print(0);

  out(pr1, pr2);

  return 0;
}
