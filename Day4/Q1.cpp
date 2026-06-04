#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter your term : ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci series: ";
    for(int i=1;i<= n;i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}