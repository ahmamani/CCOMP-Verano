#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {

    Account myAccount1{"Alvaro", 9000};
    Account myAccount2{"Graciela", 10001};

    cout << "Account1 is: " << myAccount1.getName() << " and balance is $ " << myAccount1.getBalance() << endl;
    cout << "Account2 is: " << myAccount2.getName() << " and balance is $ " << myAccount2.getBalance() << endl;

    cout << "\nEnter deposit amount for account1:";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding ..." << depositAmount << " to account1 balance";
    myAccount1.deposit(depositAmount);

    cout << "\nAccount1 is: " << myAccount1.getName() << " and balance is $ " << myAccount1.getBalance() << endl;
    cout << "\nAccount2 is: " << myAccount2.getName() << " and balance is $ " << myAccount2.getBalance() << endl;


    cout << "\nEnter deposit amount for account2:";
    cin >> depositAmount;
    cout << "adding ..." << depositAmount << " to account2 balance";
    myAccount2.deposit(depositAmount);


    cout << "\nAccount1 is: " << myAccount1.getName() << " and balance is $ " << myAccount1.getBalance() << endl;
    cout << "\nAccount2 is: " << myAccount2.getName() << " and balance is $ " << myAccount2.getBalance() << endl;


}

