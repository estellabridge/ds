#include "DNode.h"

class DLinkedList {
public:
    DLinkedList();
    ~DLinkedList();
    bool empty() const;
    const Elem& front() const;
    const Elem& back() const;
    void addFront(const Elem& e);
    void addBack(const Elem& e);
    void removeFront();
    void removeBack();
private:
    DNode* header;
    DNode* trailer;
protected:
    void add(DNode* v, const Elem& e);
    void remove(DNode* v);
};

DLinkedList::DLinkedList() {
    header = new DNode;
    trailer = new DNode;
    header -> next = trailer;
    trailer -> prev = header;
}

DLinkedList::~DLinkedList() {
    while (!empty())
    {
        removeFront();
    }
    delete header;
    delete trailer;
}