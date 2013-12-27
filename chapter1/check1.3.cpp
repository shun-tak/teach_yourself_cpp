#include <iostream>
using namespace std;

int pow(int a, int b);

int main()
{
  cout << "pow(2, 4) = " << pow(2, 4) << "\n";
  cout << "pow(2, 10) = " << pow(2, 10) << "\n";
  cout << "pow(2, 0) = " << pow(2, 0) << "\n";

  return 0;
}

int pow(int a, int b)
{
  return b<1 ? 1 : a*pow(a, b-1);
}
