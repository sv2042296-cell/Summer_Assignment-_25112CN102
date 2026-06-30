#include <iostream>
using namespace std;

string book[100];
int n = 0;

void addBook()
{
    cin.ignore();
    cout << "Enter Book Name: ";
    getline(cin, book[n]);
    n++;
}

void displayBooks()
{
    cout << "\nBooks List\n";

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". " << book[i] << endl;
    }
}

int main()
{
    int ch;

    do
    {
        cout << "\n1.Add Book";
        cout << "\n2.Display Books";
        cout << "\n3.Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        if (ch == 1)
            addBook();
        else if (ch == 2)
            displayBooks();

    } while (ch != 3);

    return 0;
}