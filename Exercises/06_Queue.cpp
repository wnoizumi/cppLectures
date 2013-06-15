/*  Complete the implementation of the Queue class
 *  Tip: Use vector::insert to enqueue and vector::pop_back to dequeue
 *  About Queue data structure:
 *  http://en.wikipedia.org/wiki/Queue_(abstract_data_type)
 */

#include <iostream>
#include <vector>

using namespace std;

class Queue {
  private:
    vector<int> data;
  public:
    Queue();
    void enqueue(int element);
    int dequeue();
};

Queue::Queue() {
  //Use data to store your queue
  this->data = vector<int>();
}

void Queue::enqueue(int element) {
  //TODO
}

int Queue::dequeue() {
  //TODO
  return 0;
}
      
int main() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);

  //Must print 1 2 3
  for (int i = 0; i < 3; i++) {        
    cout << q.dequeue();
    cout << " ";
  }

  return 0;
}

