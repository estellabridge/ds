#include "CircleList.cpp"

int main() {
    CircleList* cl = new CircleList();

    cout << cl->empty() << endl; //1 

    cl -> add("1");
    cl -> add("2");

    cout << cl->front() << endl; // 2
    cout << cl->back() << endl; // 1

    cl ->advance();
    cout << cl ->front() << endl; //1
    return 0;
}