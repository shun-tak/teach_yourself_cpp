#include <iostream>
#include <cmath>
using namespace std;

class area_cl {
public:
  double height;
  double width;
};

class rectangle : public area_cl {
public:
  rectangle(double h, double w) { height = h; width = w; }
  double area();
};

class isosceles : public area_cl {
public:
  isosceles(double h, double w) { height = h; width = w; }
  double area();
};

class cylinder : public area_cl {
public:
  cylinder(double h, double w) { height = h; width = w; }
  double area();
};

double rectangle::area()
{
  return height * width;
}

double isosceles::area()
{
  return height * width / 2;
}

double cylinder::area()
{
  double pi = acos(-1.0);
  return 2*pi*pow(width/2, 2) + pi*width*height;
}

int main()
{
  rectangle rec(2.0, 4.5);
  isosceles iso(2.0, 4.5);
  cylinder cyl(2.0, 4.5);

  cout << "長方形(高さ2.0, 幅4.5)の面積は" << rec.area() << "\n";
  cout << "二等辺三角形(高さ2.0, 幅4.5)の面積は" << iso.area() << "\n";
  cout << "シリンダ(高さ2.0, 幅4.5)の面積は" << cyl.area() << "\n";

  return 0;
}
