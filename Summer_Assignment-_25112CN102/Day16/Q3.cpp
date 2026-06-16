#include<iostream>
using namespace std;
    bool sum(int *arr,int n, int target){
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(arr[i]+arr[j]==target){
                return true;
            }     
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the size your array=";
    cin>>n;
    int target;
    cout<<"enter your target=";
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 cout<<sum(arr,n,target);
}