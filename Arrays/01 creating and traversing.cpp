#include<iostream>
using namespace std;

int main()
{
    int i, n;

    cout << "Enter number of elements in array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of array: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << endl << "Array items are: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl << "Reverse order: " << endl;
    for(i = n-1; i >= 0; i--)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;

    return 0;
}
