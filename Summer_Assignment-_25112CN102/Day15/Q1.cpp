#include <iostream>
using namespace std;
void Reverse(int *arr, int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout << "Enter your size of array=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Reverse(arr, n);
    cout << "reverse of array= ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
