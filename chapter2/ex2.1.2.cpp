/* ストップウォッチ for Unix, Linux and Mac
参考: [High Resolution Timer](http://www.songho.ca/misc/timer/timer.html)
*/
#include <iostream>
#include <sys/time.h> // for gettimeofday()
using namespace std;

class stopwatch {
  timeval lap_start;
  double elapsed_time;
  bool is_working;
public:
  stopwatch();
  ~stopwatch();
  void start();
  void stop();
  void show();
};

stopwatch::stopwatch()
{
  elapsed_time = 0;
  is_working = false;
}

stopwatch::~stopwatch()
{
  cout << elapsed_time << " ms.\n";
}

void stopwatch::start()
{
  if(is_working) {
    cout << "すでにstartしています\n";
    return;
  }
  gettimeofday(&lap_start, NULL);
  is_working = true;
}

void stopwatch::stop()
{
  if(is_working) {
    timeval lap_stop;
    gettimeofday(&lap_stop, NULL);
    elapsed_time += (lap_stop.tv_sec - lap_start.tv_sec) * 1000.0; // sec to ms
    elapsed_time += (lap_stop.tv_usec - lap_start.tv_usec) / 1000.0; // us to ms
    is_working = false;
  } else {
    cout << "すでにstopしています\n";
  }
}

void stopwatch::show()
{
  cout << elapsed_time << " ms.\n";
}

int main()
{
  stopwatch stopwatch;

  cout << "start\n";
  stopwatch.start();
  cout << "sleep(5)\n";
  sleep(5);
  cout << "stop\n";
  stopwatch.stop();

  stopwatch.show();

  cout << "sleep(3)\n";
  sleep(3);

  stopwatch.show();

  cout << "start\n";
  stopwatch.start();
  cout << "sleep(5)\n";
  sleep(5);
  cout << "stop\n";
  stopwatch.stop();

  return 0;
}
