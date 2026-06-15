#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    k = k % n;

    int temp[k];

    for(int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }

    for(int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    for(int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}