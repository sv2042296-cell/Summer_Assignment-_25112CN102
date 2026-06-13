#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Size of array = ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int MaxElement = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > MaxElement) {
            MaxElement = arr[i];
        }
    }
    cout << "Largest element of array = " << MaxElement << endl;
    int MinElement = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < MinElement) {
            MinElement = arr[i];
        }
    }

    cout << "Smallest element of array = " << MinElement;

    return 0;
}