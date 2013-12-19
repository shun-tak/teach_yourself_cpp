#include <iostream>
using namespace std;

int main()
{
  int jikyu; // 時給
  int hour; // 労働時間
  int wage; // 賃金

  cout << "時給を入力(整数値): ";
  cin >> jikyu;
  cout << "労働時間を入力(整数値): ";
  cin >> hour;

  wage = jikyu * hour;
  cout << wage << "\n";

  return 0;
}
