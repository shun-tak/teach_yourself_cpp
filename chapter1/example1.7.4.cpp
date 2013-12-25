#include <iostream>
using namespace std;

int f1(int a);
double f1(double a); // オーバーロードできる

int main()
{
  cout << f1(10) << "\n";
  cout << f1(10.1) << "\n";
  return 0;
}

int f1(int a)
{
  return a;
}

double f1(double a)
{
  return a;
}
