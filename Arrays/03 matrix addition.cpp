#include<iostream>
using namespace std;

int main()
{
    int n;
    int m1[10][10], m2[10][10];
    int i, j;

    cout << "Enter size for matrix (max 10): ";
    cin >> n;

    cout << "Enter values for matrix 1" << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << "m1[" << i << "][" << j << "]: ";
            cin >> m1[i][j];
        }
    }

    cout << "Enter values for matrix 2" << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << "m2[" << i << "][" << j << "]: ";
            cin >> m2[i][j];
        }
    }

    cout << endl << "Sum of 2 matrices is: " << endl;
    //displaying sum
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << m1[i][j] + m2[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}
