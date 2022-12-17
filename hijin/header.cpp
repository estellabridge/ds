#include "header.h"

ArrayStack::ArrayStack(int cap)
    : S(new string[cap]), capacity(cap), t(-1) {}

int ArrayStack::size() const
{
    return (t + 1);
}

bool ArrayStack::empty() const
{
    return (t < 0);
}

const string &ArrayStack::top() const
{
    // if (empty())
    //     throw IndexOutOfBounds("Top of empty stack");

    return S[t];
}

void ArrayStack::push(const string &e) // throw(StackFull)
{
    // if (size() == capacity)
    //     throw IndexOutOfBounds("push to full stack");
    S[++t] = e;
}

void ArrayStack::pop() // throw(StackEmpty)
{
    // if (empty())
    //     throw IndexOutOfBounds("Pop from empty stack");
    --t;
}