#include<iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter number of rows: ";
    cin >> n;

    cout << "Enter number of columns: ";
    cin >> m;

    int arr[n][m];
    int Tran[m][n];

    cout << "Enter matrix:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            Tran[j][i] = arr[i][j];
        }
    }

    cout << "Transpose Matrix:\n";
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout << Tran[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}