#include <iostream>
using namespace std;

int main()
{
  char s[80];
  cout << "文字列を入力: ";
  cin >> s;

  cout << "入力の長さは" << strlen(s) << "\n";

  return 0;
}
