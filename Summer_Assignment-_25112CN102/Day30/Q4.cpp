#include <iostream>
using namespace std;

string name[100];
int roll[100];
int marks[100];
int n = 0;

void addStudent()
{
    cout << "Enter Roll: ";
    cin >> roll[n];
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[n]);

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;
}

void displayStudent()
{
    cout << "\nStudent List\n";

    for (int i = 0; i < n; i++)
    {
        cout << roll[i] << "  " << name[i] << "  " << marks[i] << endl;
    }
}

void searchStudent()
{
    int r;
    cout << "Enter Roll No: ";
    cin >> r;

    for (int i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            return;
        }
    }

    cout << "Student Not Found\n";
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Add Student";
        cout << "\n2.Display Students";
        cout << "\n3.Search Student";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudent();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            break;
        default:
            cout << "Invalid Choice";
        }

    } while (ch != 4);

    return 0;
}