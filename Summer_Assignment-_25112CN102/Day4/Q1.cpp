#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your terms: ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci Seri: ";
    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}