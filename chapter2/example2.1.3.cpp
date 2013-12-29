/* timer for Unix, Linux and Mac
参考: [High Resolution Timer](http://www.songho.ca/misc/timer/timer.html)
*/
#include <iostream>
#include <sys/time.h> // for gettimeofday()
using namespace std;

class timer {
  timeval start;
public:
  timer();
  ~timer();
};

timer::timer()
{
  gettimeofday(&start, NULL);
}

timer::~timer()
{
  timeval stop;
  double elapsedTime;
  gettimeofday(&stop, NULL);

  elapsedTime = (stop.tv_sec - start.tv_sec) * 1000.0;      // sec to ms
  elapsedTime += (stop.tv_usec - start.tv_usec) / 1000.0;   // us to ms
  cout << elapsedTime << " ms.\n";
}

int main()
{
  timer ob;
  char c;

  // 遅延
  cout << "最後が [ENTER] になるようにキーを入力: ";
  cin >> c;
  return 0;
}
