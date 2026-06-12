#include <iostream>
using namespace std;

void Fibonacci(int n){
    int fib=0;
    int a=0,b=1;
 for(int i = 1; i <= n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}
int main(){
    int n;
    cout << "Enter your no = ";
    cin >> n;

    Fibonacci(n);
}