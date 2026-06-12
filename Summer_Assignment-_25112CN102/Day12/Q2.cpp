#include <iostream>
using namespace std;

void Armstrong(int n)
{
    int p = n;
    int lastdigit;
    int sum = 0;

    while(n > 0)
    {
        lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit;
        n = n / 10;
    }

    if(sum == p)
        cout << "This is an Armstrong Number";
    else
        cout << "This is not an Armstrong Number";
}

int main()
{
    int n;
    cout << "Enter your no = ";
    cin >> n;

    Armstrong(n);
}