#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5};
	int n= sizeof(arr)/sizeof(arr[0]);

	cout<< "Array: ";
	for(int i=0; i<n; i++)
	{
		cout<< arr[i]<< " ";
	}

	cout<< endl<< "After reversing: ";
	for(int i=n-1; i>=0; i--)
	{
		cout<< arr[i]<< " ";
	}
}