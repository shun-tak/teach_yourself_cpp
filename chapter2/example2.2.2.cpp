#include <iostream>
using namespace std;

#define SIZE 10

// 文字を保存するstackクラスを宣言する
class stack {
  char stck[SIZE]; // スタック領域を確保する
  int tos; // スタック先頭の索引
  char who; // スタックを識別する
public:
  stack(char c); // コンストラクタ
  void push(char ch); // スタックに文字をプッシュする
  char pop(); // スタックから文字をポップする
};

// スタックを初期化する
stack::stack(char c)
{
  tos = 0;
  who = c;
  cout << "生成 スタック" << who << "\n";
}

// スタックに文字をプッシュする
void stack::push(char ch)
{
  if(tos==SIZE) {
    cout << "スタック" << who << "は一杯です\n";
    return;
  }
  stck[tos] = ch;
  tos++;
}

// 文字をポップする
char stack::pop()
{
  if(tos==0) {
    cout << "スタック" << who << "は空です\n";
    return 0;
  }
  tos--;
  return stck[tos];
}

int main()
{
  // 自動的に初期化される2つのスタックを作成する
  stack s1('A'), s2('B');
  int i;

  s1.push('a');
  s2.push('x');
  s1.push('b');
  s2.push('y');
  s1.push('c');
  s2.push('z');

  for(i=0; i<5; i++) cout << "s1をポップする: " << s1.pop() << "\n";
  for(i=0; i<5; i++) cout << "s2をポップする: " << s2.pop() << "\n";

  return 0;
}
