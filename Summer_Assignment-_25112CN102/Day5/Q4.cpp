#include <iostream>
using namespace std;

int main() {
    int  n;
    cout << "Enter a number: ";
    cin >> n;
 int    larPrFactor = -1;
    while (n % 2 == 0) {
        larPrFactor = 2;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            larPrFactor = i;
            n /= i;
        }
    }
    if (n > 2) {
        larPrFactor = n;
    }
    cout << "Largest Prime Factor = " << larPrFactor;
    return 0;
}