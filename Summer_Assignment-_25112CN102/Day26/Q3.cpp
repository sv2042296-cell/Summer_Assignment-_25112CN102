#include <iostream>
using namespace std;

int main() {
    double balance;
    int choice;
    double amount;

    cout << "Enter Init Balance: ";
    cin >> balance;

    do {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Balance = "<< balance << endl;
                break;
            case 2:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                balance += amount;
                break;
            case 3:
                cout << "Enter Withdraw Amount: ";
                cin >> amount;
                if (amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient Balance\n";
               break;
            case 4:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice\n";
        }
    } while (choice != 4);
    return 0;
}