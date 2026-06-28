#include <iostream>
using namespace std;

class Contact {
public:
    string name;
    long long mobile;
    string email;

    void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Mobile Number: ";
        cin >> mobile;

        cout << "Enter Email: ";
        cin >> email;
    }

    void display() {
        cout << "\n----- Contact Details -----\n";
        cout << "Name   : " << name << endl;
        cout << "Mobile : " << mobile << endl;
        cout << "Email  : " << email << endl;
    }
};

int main() {
    Contact c;
    c.input();
    c.display();

    return 0;
}