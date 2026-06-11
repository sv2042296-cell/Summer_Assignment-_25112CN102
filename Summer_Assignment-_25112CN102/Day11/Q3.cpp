#include<iostream>
#include<cmath>
using namespace std;
bool PrimeNo(int n){
     if(n <= 1){
        return false;
    }
    for( int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
           
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter your no=";
    cin>>n;
    cout<<PrimeNo(n);
}