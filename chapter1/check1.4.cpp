#include <iostream>
using namespace std;

void rev_str(char *s1);
void rev_str(char *s1, char *s2);

int main()
{
  char s1[80], s2[80];
  strcpy(s1, "hello");
  cout << "s1: " << s1 << "\n\n";

  cout << "Do rev_str(s1, s2)\n";
  rev_str(s1, s2);
  cout << "s1: " << s1 << "\n";
  cout << "s2: " << s2 << "\n\n";

  cout << "Do rev_str(s1)\n";
  rev_str(s1);
  cout << "s1: " << s1 << "\n";

  return 0;
}

void rev_str(char *s1)
{
  char tmp[80];
  for (int i=0; i<strlen(s1); i++) {
    tmp[i] = s1[strlen(s1)-1-i];
  }
  strcpy(s1, tmp);
}

void rev_str(char *s1, char *s2)
{
  for (int i=0; i<strlen(s1); i++) {
    s2[i] = s1[strlen(s1)-1-i];
  }
}
