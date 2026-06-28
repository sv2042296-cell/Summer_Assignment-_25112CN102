#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float m1, m2, m3, total, percentage;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks of Subject 1: ";
        cin >> m1;

        cout << "Enter Marks of Subject 2: ";
        cin >> m2;

        cout << "Enter Marks of Subject 3: ";
        cin >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        percentage = total / 3;
    }

    void display() {
        cout << "\n------ Marksheet ------\n";
        cout << "Roll Number : " << roll << endl;
        cout << "Name        : " << name << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage  : " << percentage << "%" << endl;

        if (percentage >= 90)
            cout << "Grade: A+" << endl;
        else if (percentage >= 75)
            cout << "Grade: A" << endl;
        else if (percentage >= 60)
            cout << "Grade: B" << endl;
        else if (percentage >= 40)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: Fail" << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}