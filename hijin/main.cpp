#include "header.h"

// enum menu
// {
//     push = 1,
//     pop,
//     size,
//     emptyg,
//     top,
//     endg,
// };
int main(int argc, char const *argv[])
{
    ArrayStack A;
    A.push("7");
    A.push("13");
    cout << A.top() << endl;
    A.pop();
    A.push("9");
    cout << A.top() << endl;
    cout << A.top() << endl;
    A.pop();
    // int cint;
    // char cchar;
    // string cstring;
    // cout << "스택의 자료형 입력" << endl;
    // cout << "1: int 2: char 3: string" << endl;
    // cin >> cint;
    // switch (cint)
    // {
    // case 1:
    // {
    //     ArrayStack<int> Stack;
    //     while (cint != endg)
    //     {
    //         cout << "What you want to do?" << endl;
    //         cout << "1: push 2:size 3: empty 4: top 5:end" << endl;
    //         cin >> cint;
    //         switch (cint)
    //         {
    //         case push:
    //         {
    //             cout << "enter " << endl;
    //             cin >> cint;
    //             Stack.push(cint);

    //             break;
    //         }
    //         case pop:
    //         {
    //             Stack.pop();
    //             break;
    //         }
    //         case emptyg:
    //         {
    //             if (Stack.empty())
    //                 cout << "is empty" << endl;
    //             break;
    //         }
    //         case top:
    //         {
    //             Stack.top();
    //             break;
    //         }
    //         default:
    //             break;
    //         }
    //     }
    //     break;
    // }
    // case 2:
    // {
    //     ArrayStack<char> Stack;
    //     while (cint != endg)
    //     {
    //         cout << "What you want to do?" << endl;
    //         cout << "1: push 2:size 3: empty 4: top 5:end" << endl;
    //         cin >> cint;
    //         switch (cint)
    //         {
    //         case push:
    //         {
    //             cout << "enter " << endl;
    //             cin >> cchar;
    //             Stack.push(cchar);

    //             break;
    //         }
    //         case pop:
    //         {
    //             Stack.pop();
    //             break;
    //         }
    //         case emptyg:
    //         {
    //             if (Stack.empty())
    //                 cout << "is empty" << endl;
    //             break;
    //         }
    //         case top:
    //         {
    //             Stack.top();
    //             break;
    //         }
    //         default:
    //             break;
    //         }
    //     }
    //     break;
    // }
    // case 3:
    // {
    //     ArrayStack<string> Stack;
    //     while (cint != endg)
    //     {
    //         cout << "What you want to do?" << endl;
    //         cout << "1: push 2:size 3: empty 4: top 5:end" << endl;
    //         cin >> cint;
    //         switch (cint)
    //         {
    //         case push:
    //         {
    //             cout << "enter " << endl;
    //             cin >> cint;
    //             Stack.push(cstring);
    //             break;
    //         }
    //         case pop:
    //         {
    //             Stack.pop();
    //             break;
    //         }
    //         case emptyg:
    //         {
    //             if (Stack.empty())
    //                 cout << "is empty" << endl;
    //             break;
    //         }
    //         case top:
    //         {
    //             Stack.top();
    //             break;
    //         }
    //         default:
    //             break;
    //         }
    //     }
    //     break;
    // }

    // default:
    //     cout << "입력값 확인 필요" << endl;
    //     break;
    // }

    return 0;
}
