#include <iostream>
using namespace std;

class FeetToInch {
  int feet;
  int inch;
public:
  FeetToInch(int f) { feet = f; inch = feet * 12; cout << inch; }
};

int main() {

  int feet;

  // 0が入力されるまで繰り返し
  do {
    cout << "フィート数を入力(0で終了): ";
    cin >> feet;
    cout << feet << "フィート = ";
    FeetToInch f_to_i(feet);
    cout << "インチ\n";
  } while (feet != 0);

  return 0;
}
