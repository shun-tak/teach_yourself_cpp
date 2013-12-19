#include <iostream>
using namespace std;

int main()
{
  char ch;

  cout << "キーを入力。xで停止\n";
  do {
    cout << ": ";
    cin >> ch;
  } while (ch != 'x');

  return 0;
}
