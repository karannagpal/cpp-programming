/*
The following program
shows how to sort an array
using repeated swapping
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    int i, j, temp;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter values of array: " << endl;

    for(i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }


    cout << endl << "Your array is:" << endl;
    // displaying array
    for(i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }

    //sorting the array
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                //swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << endl << "Sorted array is:" << endl;
    // displaying array
    for(i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }

    cout << endl;

    return 0;

    /*
    this sorting algorithm is
    faster and efficient than
    traditional bubble sort
    */
}
