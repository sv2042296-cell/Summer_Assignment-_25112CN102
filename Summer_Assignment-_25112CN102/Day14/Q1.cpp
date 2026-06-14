#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter your size of your=";
    cin>>n;
    int arr[n];

    cout << "enter your element:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter your target: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << key << " index " << i<<" present" ;
            found = true;
            break;
        }
    }

    if(found == false) {
        cout << "target is not present";
    }

    return 0;
}