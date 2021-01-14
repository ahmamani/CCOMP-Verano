#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {

    Account myAccount1{"Alvaro"};
    Account myAccount2{"Graciela"};

    cout << "Name in object myAccount is: " << myAccount1.getName() << endl;
    cout << "Name in object myAccount is: " << myAccount2.getName() << endl;
}

