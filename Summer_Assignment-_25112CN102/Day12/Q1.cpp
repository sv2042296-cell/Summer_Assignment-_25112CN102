#include <iostream>
using namespace std;
void Palindrom(int n)
{
    int temp = n;
    int reverse = 0;
    int lastdigit = 0;
    int j = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    if (reverse == temp)
        cout << "This Number is palindron";
    else
    {
        cout << "This Number is not palindron";
    }
}
int main()
{
    int n;
    cout << "Enter your no=";
    cin >> n;
    Palindrom(n);
}
