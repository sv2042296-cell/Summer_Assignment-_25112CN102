#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float basicSalary, bonus, totalSalary;

    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void calculate() {
        totalSalary = basicSalary + bonus;
    }

    void display() {
        cout << "\n------ Salary Details ------\n";
        cout << "Employee ID : " << id << endl;
        cout << "Name        : " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus       : " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    Employee e;

    e.input();
    e.calculate();
    e.display();

    return 0;
}