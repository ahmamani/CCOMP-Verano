#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main() {
    DynamicArray<int> daInts;

    daInts.push_back(4);
    daInts.push_back(40);
    daInts.push_back(50);

    cout << daInts << endl;


    return 0;
}