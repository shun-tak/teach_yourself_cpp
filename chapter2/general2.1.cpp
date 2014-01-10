#include <iostream>
using namespace std;

class prompt {
  int count;
  void beep();
public:
  prompt(char *ch);
  ~prompt();
};

prompt::prompt(char *ch)
{
  cout << ch;
  cin >> count;
}

prompt::~prompt()
{
  int i;
  for(i=0; i<count; i++) beep();
}

void prompt::beep()
{
  cout << "BEEP!\n";
}

int main()
{
  prompt p("入力した整数値回数ビープします: ");

  return 0;
}
