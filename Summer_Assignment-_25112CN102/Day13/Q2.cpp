#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Size of array = ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double avg = (double)sum / n;

    cout << "Sum of all elements = " << sum << endl;
    cout << "Average = " << avg;

    return 0;
}