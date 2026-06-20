#include <iostream>
using namespace std;

int main()
{
  int n, m;

  cout << "Enter number of rows: ";
  cin >> n;

  cout << "Enter number of columns: ";
  cin >> m;

  int A[n][m], B[n][m], Sum[n][m];

  cout << "Enter elements of first matrix:\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> A[i][j];
    }
  }

  cout << "Enter elements of second matrix:\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> B[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      Sum[i][j] = A[i][j] + B[i][j];
    }
  }

  cout << "\nSum of matrices:\n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << Sum[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}