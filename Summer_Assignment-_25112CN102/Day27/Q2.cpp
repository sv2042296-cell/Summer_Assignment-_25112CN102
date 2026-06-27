#include <iostream>
using namespace std;

int main()
{
    int id;
    string name, department;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Department: ";
    cin >> department;

    cout << "\nEmployee Record";
    cout << "\nID: " << id;
    cout << "\nName: " << name;
    cout << "\nDepartment: " << department;

    return 0;
}