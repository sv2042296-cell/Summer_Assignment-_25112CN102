#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    k = k % n;

    int temp[k];

    // Last k elements store karo
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    for(int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}