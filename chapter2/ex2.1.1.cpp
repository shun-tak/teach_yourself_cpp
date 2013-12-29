#include <iostream>
using namespace std;

#define SIZE 5

/* 循環キュー
 */
class queue {
  int q[SIZE];
  int length;
  int hoq; // Head of the queue
  int toq; // Tail of the queue
public:
  queue();
  bool empty();
  bool full();
  int get_length();
  void enqueue(int num);
  int dequeue();
};

queue::queue()
{
  length = 0;
  hoq = 0;
  toq = 0;
}

bool queue::empty()
{
  if (length == 0) {
    cout << "空だよ\n";
    return true;
  }
  return false;
}

bool queue::full()
{
  if(length == SIZE) {
    cout << "満タンだよ\n";
    return true;
  }
  return false;
}

int queue::get_length()
{
  return length;
}

void queue::enqueue(int num)
{
  if(full()) {
    return;
  }
  q[hoq] = num;
  cout << "enqueue: " << hoq << "->" << num << "\n";
  hoq++;
  if(hoq == SIZE) hoq = 0;
  length++;
}

int queue::dequeue()
{
  if(empty()) {
    return 0;
  }
  int ret = q[toq];
  cout << "dequeue: " << toq << "->" << ret << "\n";
  toq++;
  if(toq == SIZE) toq = 0;
  length--;
  return ret;
}

int main()
{
  queue queue;

  cout << "EXPECT 空だよ\n";
  cout << queue.dequeue() << "\n";

  cout << "EXPECT 5まで入る\n";
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  queue.enqueue(4);
  queue.enqueue(5);

  cout << "EXPECT 満タンだよ\n";
  queue.enqueue(6);

  cout << "EXPECT 5まで出てくる\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";

  cout << "EXPECT 空だよ\n";
  cout << queue.dequeue() << "\n";

  cout << "EXPECT 8まで入って6が出てくる\n";
  queue.enqueue(6);
  queue.enqueue(7);
  queue.enqueue(8);
  cout << queue.dequeue() << "\n";

  cout << "EXPECT 11まで入って満タンだよとなる\n";
  queue.enqueue(9);
  queue.enqueue(10);
  queue.enqueue(11);
  queue.enqueue(12);

  cout << "EXPECT 11まで出てきて空だよとなる\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";

  return 0;
}
