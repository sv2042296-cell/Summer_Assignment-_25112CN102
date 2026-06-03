#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter your number : ";
    cin >> a >> b;

    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD = " << a;

    return 0;
}