#include <iostream>
using namespace std;

int main() {
    string name[100];
    int quantity[100];
    int n = 0;
    int choice;

    do {
        cout << "\n1. Add Item\n2. Display Items\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Item Name: ";
                cin >> name[n];
                cout << "Enter Quantity: ";
                cin >> quantity[n];
                n++;
                break;

            case 2:
                cout << "\nInventory:\n";
                for (int i = 0; i < n; i++)
                    cout << name[i] << " - " << quantity[i] << endl;
                break;

            case 3:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 3);

    return 0;
}