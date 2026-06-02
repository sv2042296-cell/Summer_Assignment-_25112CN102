#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"Enter your no:";
    cin>>n;
    int i=0;
    int l;
    while(i<n){
         l=n%10;
        count++;
        n=n/10;



    }
    cout<<count;
}