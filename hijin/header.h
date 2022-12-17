#include <iostream>

using namespace std;

class ArrayStack
{
    enum
    {
        DEF_CAPACITY = 100
    };

public:
    ArrayStack(int cap = DEF_CAPACITY);
    int size() const;
    bool empty() const;
    const string &top() const;  // throw(StackEmpty);
    void push(const string &e); // throw(StackFull);
    void pop();                 // throw(StackEmpty);

private:
    string *S;
    int capacity;
    int t;
};
