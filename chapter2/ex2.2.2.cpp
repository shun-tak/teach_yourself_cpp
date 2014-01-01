#include <iostream>
#include <ctime>
using namespace std;

class t_and_d {
  time_t now;
public:
  t_and_d(time_t t);
  void show();
};

t_and_d::t_and_d(time_t t)
{
  now = t;
}

void t_and_d::show()
{
  struct tm *local;
  local = localtime(&now);

  cout << (local->tm_year+1900) << "年" << (local->tm_mon+1) << "月"
       << local->tm_mday << "日 " << local->tm_hour << ":"
       << local->tm_min << ":" << local->tm_sec << "\n";
}

int main()
{
  t_and_d ob(time(NULL));

  ob.show();

 return 0;
}
