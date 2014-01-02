#include <iostream>
using namespace std;

class area_cl {
public:
  double height;
  double width;
};

class rectangle : public area_cl {
public:
  rectangle(double h, double w);
  double area();
};

class isosceles : public area_cl {
public:
  isosceles(double h, double w);
  double area();
};

rectangle::rectangle(double h, double w)
{
  height = h;
  width = w;
}

double rectangle::area()
{
  return height * width;
}

isosceles::isosceles(double h, double w)
{
  height = h;
  width = w;
}

double isosceles::area()
{
  return height * width / 2;
}

int main()
{
  rectangle rec(2.0, 4.5);
  isosceles iso(2.0, 4.5);

  cout << "長方形(高さ2.0, 幅4.5)の面積は" << rec.area() << "\n";
  cout << "二等辺三角形(高さ2.0, 幅4.5)の面積は" << iso.area() << "\n";

  return 0;
}
