#include <iostream>
using namespace std;
int main() {
    int x, n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        ans *= x;
    }
    cout << x << "^" << n <<"=" << ans << endl;
    return 0;
}