#include <string>
#include <iostream>

using namespace std;

class StringNode {
private:
    string elem;
    StringNode* next;

    friend class StringLinkedList;
};