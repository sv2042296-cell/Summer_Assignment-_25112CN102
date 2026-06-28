#include <iostream>
using namespace std;

class Bank {
public:
    int accountNo;
    string name;
    float balance;

    void input() {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void display() {
        cout << "\n----- Account Details -----\n";
        cout << "Account No : " << accountNo << endl;
        cout << "Name       : " << name << endl;
        cout << "Balance    : " << balance << endl;
    }
};

int main() {
    Bank b;
    b.input();
    b.display();

    return 0;
}