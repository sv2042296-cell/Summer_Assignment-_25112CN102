#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout <<"Enter start and end: ";
    cin >>start;
    cin>>end;
    for(int i=start;i<=end;i++) {
        int temp = i;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }
        if (sum == i) {
            cout <<i<< " ";
        }
    }
    return 0;
}