#include <iostream>
using namespace std;

class contact {
  char name[80];
  char address[80];
public:
  void store(const char *_name, const char *_address);
  void display();
};

void contact::store(const char *_name, const char *_address)
{
  strcpy(name, _name);
  strcpy(address, _address);
}

void contact::display()
{
  cout << "name: " << name << "\n";
  cout << "address: " << address << "\n";
}

int main()
{
  contact shun;
  shun.store("shun-tak", "shun@example.com");
  shun.display();

  return 0;
}
