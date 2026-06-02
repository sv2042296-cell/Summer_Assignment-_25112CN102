#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number=";
    cin>>n;
    int temp=n;
    int reverse=0;
    while(n>0){
        int lastdigit;
    
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
}
if(temp==reverse){
    cout<<"This is palidrone number";
}
else{
    cout<<"This is not palidrone number";
}
    }
