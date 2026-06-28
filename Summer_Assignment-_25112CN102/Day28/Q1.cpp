#include <iostream>
using namespace std;

class Library {
public:
    int bookId;
    string title, author;

    void input() {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author Name: ";
        cin >> author;
    }

    void display() {
        cout << "\n----- Library Details -----\n";
        cout << "Book ID : " << bookId << endl;
        cout << "Title   : " << title << endl;
        cout << "Author  : " << author << endl;
    }
};

int main() {
    Library b;
    b.input();
    b.display();

    return 0;
}