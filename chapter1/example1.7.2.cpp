#include <iostream>
using namespace std;

void date(char *date); // 文字列
void date(int month, int day, int year); // 数値

int main()
{
  date("12/25/2013");
  date(12, 25, 2013);
  return 0;
}

// 文字列
void date(char *date)
{
  cout << "日付: " << date << "\n";
}

// 数値
void date(int month, int day, int year)
{
  cout << "日付: " << month << "/";
  cout << day << "/" << year << "\n";
}
