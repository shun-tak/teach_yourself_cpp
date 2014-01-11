#include <iostream>
using namespace std;

class planet {
  int moons;
  double dist_from_sun;
  double diameter;
  double mass;
public:
  int get_moons() { return moons; }
  void set_moons(int m) { moons = m; }
  double get_dist_from_sun() { return dist_from_sun; }
  void set_dist_from_sun(double d) { dist_from_sun = d; }
  double get_diameter() { return diameter; }
  void set_diameter(double d) { diameter = d; }
  double get_mass() { return mass; }
  void set_mass(double m) { mass = m; }
};

class Mars : public planet {
public:
  Mars(int moons, double dist, double dia, double mass);
  void show();
};

Mars::Mars(int moons, double dist, double dia, double mass)
{
  set_moons(moons);
  set_dist_from_sun(dist);
  set_diameter(dia);
  set_mass(mass);
}

void Mars::show()
{
  cout << "Moons: " << get_moons() << "\n";
  cout << "Distance from sun: " << get_dist_from_sun() << " km\n";
  cout << "Diameter: " << get_diameter() << " km\n";
  cout << "Mass: " << get_mass() << " kg\n";
}

int main()
{
  Mars mars(2, 227936640, 6780, 639E21);

  mars.show();

  return 0;
}
