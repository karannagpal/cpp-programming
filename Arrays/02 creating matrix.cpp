#include<iostream>
using namespace std;

int main()
{
    int m, n;
    int arr[10][10];
    int i, j;

    cout << "Enter number of columns for matrix: ";
    cin >> n;

    cout << "Enter number of rows for matrix: ";
    cin >> m;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << endl << "Your matrix is: " << endl;
    //displaying the matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}
