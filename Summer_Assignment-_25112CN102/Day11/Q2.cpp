#include<iostream>
using namespace std;
int Max(int a,int b){
    if(a>b){
        return a ;
    }
    else {
        return b;
    }
}
int main(){
    int a,b;
    cout<<"value  of  a =";
    cin>>a;
    cout<<"value  of  b =";
    cin>>b;
    cout<<"This is th maximum no:"<<Max(a,b);    
}