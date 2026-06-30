#include <iostream>
using namespace std;

string name[100];
int roll[100];
int marks[100];
int n = 0;

void addStudent()
{
    cout << "Enter Roll No: ";
    cin >> roll[n];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
}

void displayStudents()
{
    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Roll: " << roll[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Marks: " << marks[i] << endl;
        cout << "-------------------\n";
    }
}

int main()
{
    int ch;

    do
    {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        if (ch == 1)
            addStudent();
        else if (ch == 2)
            displayStudents();

    } while (ch != 3);

    return 0;
}