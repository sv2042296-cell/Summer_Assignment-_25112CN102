#include<iostream>
using namespace std;
int Sum(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a,b;
    cout<<"value  of  a =";
    cin>>a;
    cout<<"value  of  b =";
    cin>>b;
    cout<<Sum(a,b);    
}