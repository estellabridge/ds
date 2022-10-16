#include <iostream>

using namespace std;

class ArrayStack {
    enum {
        DEF_CAPACITY = 100
    };
public:
    ArrayStack(int cap = DEF_CAPACITY);
    int size() const;
    bool empty() const;
    const string& top() const;
    void push(const string& e);
    void pop();

private:
    string* S;
    int capacity;
    int t;  
};

