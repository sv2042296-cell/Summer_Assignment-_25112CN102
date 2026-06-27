#include <iostream>
#include<string>
using namespace std;

int main()
{
    int roll, age;
    string name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "\nStudent Record";
    cout << "\nRoll Number: " << roll;
    cout << "\nName: " << name;
    cout << "\nAge: " << age;

    return 0;
}