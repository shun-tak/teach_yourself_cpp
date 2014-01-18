#include <iostream>
using namespace std;

#define SIZE 10

// 文字を格納するstackクラスを宣言する
class stack {
  char stck[SIZE]; // スタック領域を確保する
  int tos; // スタックの先頭の索引
public:
  stack();
  void push(char ch);
  char pop();
};

stack::stack()
{
  cout << "スタックを生成する\n";
  tos = 0;
}

void stack::push(char ch)
{
  if (tos==SIZE) {
    cout << "スタックは一杯です";
    return;
  }
  stck[tos] = ch;
  tos++;
}

char stack::pop()
{
  if (tos==0) {
    cout << "スタックは空です";
    return 0;
  }
  tos--;
  return stck[tos];
}

void showstack(stack s)
{
  cout << "show stack:\n";
  int i;
  for(i=0; i<SIZE; i++) cout << s.pop() << "\n";
}

int main()
{
  stack s;

  s.push('a');
  s.push('b');
  s.push('c');

  showstack(s);

  int i;
  for(i=0; i<3; i++) cout << "sをポップする: " << s.pop() << "\n";


  return 0;
}
