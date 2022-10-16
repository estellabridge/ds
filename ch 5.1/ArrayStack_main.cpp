#include "ArrayStack.cpp"

int main() {
    ArrayStack A;
    A.push("7"); // top 7
    A.push("13"); // top 13
    cout << A.top() << endl; //13
    A.pop(); //7
    A.push("9"); //9        
    cout << A.top() << endl; //9
    cout << A.top() << endl; //7
}