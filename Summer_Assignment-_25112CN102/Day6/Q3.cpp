#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1)
            count++;
        n /= 2;
    }
    cout << "Number oset bits="<< count <<endl;

    return 0;
}