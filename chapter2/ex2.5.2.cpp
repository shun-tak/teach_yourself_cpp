#include <iostream>
using namespace std;

union intunion {
  unsigned char bytes[2];
  short int value;
  void swap();
  void show_bytes();
  void show_value();
  void show();
};
void intunion::swap()
{
  unsigned char tmp = bytes[0];
  bytes[0] = bytes[1];
  bytes[1] = tmp;
}
void intunion::show_bytes()
{
  int i;
  for(i=0; i<2; i++)
    cout << (int) bytes[i] <<" ";
  cout << "\n";
}
void intunion::show_value()
{
  cout << value << "\n";
}
void intunion::show()
{
  cout << "bytes: ";
  show_bytes();
  cout << "value: ";
  show_value();
}

int main()
{
  intunion int_u;

  cout << "int値を入力: ";
  cin >> int_u.value;

  int_u.show();
  int_u.swap();
  int_u.show();

  return 0;
}
