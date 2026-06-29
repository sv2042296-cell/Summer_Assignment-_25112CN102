#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int choice;

    cout << "Enter string: ";
    cin >> s;

    do
    {
        cout << "\n1. Length\n2. Reverse\n3. Uppercase\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Length = " << s.length();
            break;

        case 2:
        {
            string temp = s;
            reverse(temp.begin(), temp.end());
            cout << temp;
            break;
        }

        case 3:
        {
            string temp = s;
            for (char &c : temp)
                c = toupper(c);
            cout << temp;
            break;
        }

        case 4:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}