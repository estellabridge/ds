#include "LinkedQueue.h"

LinkedQueue::LinkedQueue()
    : C(), n(0) { }

int LinkedQueue::size() const {
    return n;
}

bool LinkedQueue::empty() const {
    return n == 0;
}

const Elem& LinkedQueue::front() const {
    return C.front();
}

void LinkedQueue::enqueue(const Elem& e) {
    C.add(e);
    C.advance();
    n++;
}

void LinkedQueue::dequeue() {
    C.remove();
    n--;
}
    