#include <iostream>
#include "MyStack.h"

using namespace std;

int main() {

    MyStack<int> s, r;

    s.push(1);
    s.push(2);
    s.push(3);

    r.push(4);
    r.push(5);
    r.push(6);

    MyStack<int> t = s + r;

    cout << t << endl;

    return 0;
}