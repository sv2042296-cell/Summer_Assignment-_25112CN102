#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter your number=";
    cin>>n;
    int product=1;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        product=lastdigit*product;
        n=n/10;
    }
    cout<<product;
}