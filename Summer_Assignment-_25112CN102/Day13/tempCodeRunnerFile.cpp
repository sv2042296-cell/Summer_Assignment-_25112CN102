
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Size of array = ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int odd,even;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else {
            odd;
        }
    }