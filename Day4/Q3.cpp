#include <iostream>
using namespace std;
int main() {
    int n, temp, digit, sum = 0;
    cout << "Enter your number: ";
    cin >> n;
    temp = n;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    if (sum == temp)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
    return 0;
}

