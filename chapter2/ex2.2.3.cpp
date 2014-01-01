#include <iostream>
using namespace std;

class box {
  double width;
  double height;
  double depth;
  double volume;
public:
  box(double w, double h, double d);
  void vol();
};

box::box(double w, double h, double d)
{
  width = w;
  height = h;
  depth = d;
  volume = width * height * depth;
}

void box::vol()
{
  cout << volume;
  cout << "\n";
}

int main()
{
  box box1(3, 4, 2);
  box1.vol();

  return 0;
}
