#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, choice;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    do
    {
        cout << "\n1. Display\n2. Sum\n3. Maximum\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 2:
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
                sum += arr[i];
            cout << "Sum = " << sum;
            break;
        }

        case 3:
        {
            int mx = arr[0];
            for (int i = 1; i < n; i++)
                if (arr[i] > mx)
                    mx = arr[i];
            cout << "Maximum = " << mx;
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