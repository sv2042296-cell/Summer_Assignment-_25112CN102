#include <iostream>
using namespace std;

class Ticket {
public:
    string name;
    int age;
    string destination;

    void input() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Destination: ";
        cin >> destination;
    }

    void display() {
        cout << "\n----- Ticket Details -----\n";
        cout << "Passenger Name : " << name << endl;
        cout << "Age            : " << age << endl;
        cout << "Destination    : " << destination << endl;
        cout << "Ticket Booked Successfully!" << endl;
    }
};

int main() {
    Ticket t;
    t.input();
    t.display();

    return 0;
}