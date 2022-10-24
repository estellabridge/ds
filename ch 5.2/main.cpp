#include "LinkedQueue.h"

int main() {
    LinkedQueue lq = LinkedQueue();

    lq.enqueue("2");
    cout << lq.size() << endl; //1
    lq.enqueue("2");
    cout << lq.front() << endl; //2
    
     return 0;
}