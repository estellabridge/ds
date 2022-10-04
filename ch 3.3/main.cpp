#include "DLinkedList.cpp"
#include <iostream>

int main() {
    DLinkedList* dl = new DLinkedList();

    dl->addFront("1");
    dl->addBack("2");
    
    cout << dl->front() << endl;
    cout << dl->back() << endl;
    return 0;
}