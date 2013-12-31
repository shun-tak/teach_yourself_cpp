#include <iostream>
#include <ctime>
using namespace std;

int main()
{
time_t timer;
 struct tm *local;
 struct tm *utc;

 /* 現在時刻を取得 */
 timer = time(NULL);

 local = localtime(&timer); /* 地方時に変換 */
 printf("地方時: ");
 printf("%4d/", local->tm_year + 1900);
 printf("%2d/", local->tm_mon + 1);
 printf("%2d ", local->tm_mday);
 printf("%2d:", local->tm_hour);
 printf("%2d:", local->tm_min);
 printf("%2d", local->tm_sec);
 printf(" %d\n", local->tm_isdst);

 return 0;
}
