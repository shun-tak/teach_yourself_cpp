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
  queue queue, queue_clone;

  cout << "EXPECT 空だよ\n";
  cout << queue.dequeue() << "\n";

  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  queue.enqueue(4);
  queue.enqueue(5);

  queue_clone = queue;

  cout << "queue\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";
  cout << queue.dequeue() << "\n";

  cout << "queue_clone\n";
  cout << queue_clone.dequeue() << "\n";
  cout << queue_clone.dequeue() << "\n";
  cout << queue_clone.dequeue() << "\n";
  cout << queue_clone.dequeue() << "\n";
  cout << queue_clone.dequeue() << "\n";

  return 0;
}
