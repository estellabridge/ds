#include "ArrayStack.h"

ArrayStack::ArrayStack(int cap)
    : S(new string[cap]), capacity(cap), t(-1) { }

int ArrayStack::size() const {
    return (t+1);
}
bool ArrayStack::empty() const {
    return (t<0);
}
const string& ArrayStack::top() const {
    return S[t];
}

void ArrayStack::push(const string& e) {
    S[++t] = e;
}

void ArrayStack::pop() {
    --t;
}

