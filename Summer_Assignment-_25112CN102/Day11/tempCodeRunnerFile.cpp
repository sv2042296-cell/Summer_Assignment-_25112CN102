
#include<cmath>
using namespace std;
bool PrimeNo(int n){
    for( int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return true;
        }
           
    }
     return false;
}
int main(){
    int n;
    cout<<"Enter your no=";
    cin>>n;
    cout<<PrimeNo(n);
}