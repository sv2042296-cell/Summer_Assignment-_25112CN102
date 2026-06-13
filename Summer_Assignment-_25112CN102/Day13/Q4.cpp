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
    int odd = 0, even = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << "Total no of odd elements in array = " << odd << endl;
    cout << "Total no of even elements in array = " << even;

    return 0;
}