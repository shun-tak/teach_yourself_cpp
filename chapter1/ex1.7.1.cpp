#include <iostream>
#include <cmath>
using namespace std;

double sroot(int a);
double sroot(long a);
double sroot(double a);

int main()
{
  cout << "整数3の平方根は" << sroot(3) << "\n";
  cout << "長整数3Lの平方根は" << sroot(3L) << "\n";
  cout << "倍精度浮動小数点3.0の平方根は" << sroot(3.0) << "\n";

  return 0;
}

double sroot(int a)
{
  return sqrt(a);
}

double sroot(long a)
{
  return sqrt(a);
}

double sroot(double a)
{
  return sqrt(a);
}
