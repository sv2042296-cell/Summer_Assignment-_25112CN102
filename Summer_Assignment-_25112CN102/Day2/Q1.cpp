#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter your no:";
    cin>>n;
    int i=0;
    int l;
    while(i<n){
         l=n%10;
         sum=sum+l;
        n=n/10;
    }
    cout<<sum;
}