#include <iostream>
using namespace std;

// 文字を保存するstack構造体を宣言する
struct stack {
  stack(char name); // コンストラクタ
  stack(char name, int size); // メモリ動的割り当て可能なコンストラクタ
  void push(char ch); // スタックに文字をプッシュする
  char pop(); // スタックから文字をポップする
private:
  char *stck; // スタック
  int stck_size; // スタックサイズ
  int tos; // スタック先頭の索引
  char who; // スタックを識別する
};

// スタックを初期化する
stack::stack(char name)
{
  stck_size = 10;
  stck = (char *) malloc(stck_size);
  tos = 0;
  who = name;
  cout << "生成 スタック" << who << "\n";
}

stack::stack(char name, int size)
{
  stck_size = size;
  stck = (char *) malloc(stck_size);
  tos = 0;
  who = name;
  cout << "生成 スタック" << who << "\n";
}

// スタックに文字をプッシュする
void stack::push(char ch)
{
  if(tos==stck_size) {
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
  stack s1('A', 3), s2('B', 3);
  int i;

  s1.push('a');
  s2.push('x');
  s1.push('b');
  s2.push('y'); // スタックAは一杯です
  s1.push('c');
  s2.push('z');
  s1.push('d');
  s2.push('w'); // スタックBは一杯です

  for(i=0; i<5; i++) cout << "s1をポップする: " << s1.pop() << "\n";
  for(i=0; i<5; i++) cout << "s2をポップする: " << s2.pop() << "\n";

  return 0;
}
