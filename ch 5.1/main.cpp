#include "LinkedStack.cpp"

int main() {
    LinkedStack st = LinkedStack();
    cout << st.empty() << endl;

    st.push("4");
    st.push("3");
    st.push("2");
    st.push("1");

    // top: x, size : y
    cout << "top : " << st.top() << " size : " << st.size() << endl;
    st.pop();
    cout << "top : " << st.top() << " size : " << st.size() << endl;
    st.pop();
    cout << "top : " << st.top() << " size : " << st.size() << endl;
    st.pop();
    cout << "top : " << st.top() << " size : " << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    
    
     return 0;
}