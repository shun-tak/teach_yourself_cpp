#include <iostream>
using namespace std;

int sleep(char *s);

int main()
{
  cout << "wait 1 second\n";
  sleep(1);
  cout << "end\n";

  cout << "wait \"1\" second\n";
  sleep("1");
  cout << "end\n";
  return 0;
}

int sleep(char *s)
{
  return sleep(atoi(s));
}
