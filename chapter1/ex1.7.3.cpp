#include <iostream>
using namespace std;

int min(int a, int b);
double min(char *a, char *b);
double min(double a, double b);

int main()
{
  cout << "min(2, 1) => " << min(2, 1) << "\n";
  cout << "min(\"2.1\", \"1.2\") => " << min("2.1", "1.2") << "\n";
  cout << "min(2.1, 1.2) => " << min(2.1, 1.2) << "\n";

  return 0;
}

int min(int a, int b)
{
  return a<b ? a : b;
}

double min(char *a, char *b)
{
  double d1 = atof(a);
  double d2 = atof(b);

  return d1<d2 ? d1 : d2;
}

double min(double a, double b)
{
  return a<b ? a : b;
}
