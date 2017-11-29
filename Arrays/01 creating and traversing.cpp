/*
The following program
shows how to create
and traverse through array
*/

#include<iostream>
using namespace std;

int main()
{
    int i, n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of array: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << endl << "Array items are: " << endl;
    //displaying the array
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl << "Reverse order: " << endl;
    for(i = n-1; i >= 0; i--)
    {
        cout << arr[i] << "  ";
    }

    //extra new line for neat code
    cout << endl;

    return 0;
}
