#include <iostream>

using namespace std;

int recursiveFsctorial(int n) {
    if (n==0) 
        return 1;
    else
        return n *recursiveFsctorial(n-1);
}