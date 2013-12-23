#include <iostream>
using namespace std;

class card {
  string title;
  string author;
  int left_amount;
public:
  void store(string ch1, string ch2, int i);
  void show();
};

void card::store(string ch1, string ch2, int i)
{
  title = ch1;
  author = ch2;
  left_amount = i;
}

void card::show()
{
  cout << "タイトル: " << title << "\n";
  cout << "著者: " << author << "\n";
  cout << "在庫冊数: " << left_amount << "\n";
}

int main()
{
  card card;
  card.store("独習C++", "ハーバート・シルト", 5);
  card.show();

  return 0;
}
