/*
The following program
shows how to search
a value from array
using linear search algorithm
*/

#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int i, x;
	int flag = 0;

	for(i = 0; i < 5; i++)
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}

	cout << "Enter value to be searched: ";
	cin >> x;

	for(i = 0; i < 5; i++)
	{
		if(arr[i] == x)
		{
			flag++;
			break;
		}
	}

	if(flag == 0)
	{
		cout << "Not found" << endl;
	}
	else
	{
		cout << "Found" << endl;
	}

    return 0;

    /*
    size of array in this program
    is fixed to 5 elements only
    it can be taken as input from user
    This program is very simple,
    enhanced version can also be made.
    */
}
