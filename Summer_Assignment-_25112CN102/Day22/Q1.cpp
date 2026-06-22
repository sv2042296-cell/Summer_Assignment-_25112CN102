#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int left = 0, right = str.length() - 1;
    bool palindrome = true;

    while (left < right) {
        if (str[left] != str[right]) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}