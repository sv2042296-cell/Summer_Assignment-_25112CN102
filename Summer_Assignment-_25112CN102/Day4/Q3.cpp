#include <iostream>
using namespace std;
int main() {
    int n, number , digit, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    number = n;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    if (sum == number)
        cout << "Armstrong Number";
    else
        cout << "Not  Armstrong Number";
    return 0;
}