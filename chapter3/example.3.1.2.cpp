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
    cout << "スタックは一杯です\n";
    return;
  }
  stck[tos] = ch;
  tos++;
}

char stack::pop()
{
  if (tos==0) {
    cout << "スタックは空です\n";
    return 0;
  }
  tos--;
  return stck[tos];
}

int main()
{
  stack s1, s2;
  int i;

  s1.push('a');
  s1.push('b');
  s1.push('c');

  // s1のクローンを作成する
  s2 = s1;

  for(i=0; i<3; i++) cout << "s1をポップする: " << s1.pop() << "\n";
  for(i=0; i<3; i++) cout << "s2をポップする: " << s2.pop() << "\n";

  return 0;
}
