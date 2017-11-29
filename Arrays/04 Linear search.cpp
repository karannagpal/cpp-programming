#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int i, x;
	int flag = 0;

	for(i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	cout << "Enter value to be searched";
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
		cout << "Not found";
	}
	else
	{
		cout << "found";
	}

}