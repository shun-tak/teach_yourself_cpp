#include <iostream>
using namespace std;

int main() {

  int feet;
  int inch;

  do {
    cout << "フィート数を入力(0で終了): ";
    cin >> feet;
    inch = feet * 12;
    cout << feet << "フィート = " << inch << "インチ\n";
  } while (feet != 0);

  return 0;
}
