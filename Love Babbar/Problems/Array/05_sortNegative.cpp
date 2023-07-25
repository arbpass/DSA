#include<bits/stdc++.h>

using namespace std;

void sortNegative(int arr[], int n)
{
	int temp=-1; 
	for(int i=0; i<n; i++)
	{
		if(arr[i] > 0 && temp == -1) temp= i;
		else if(arr[i] < 0 && temp != -1)
		{
			swap(arr[i], arr[temp]);
			temp= i;
		}
	}
}

int main()
{
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n=sizeof(arr)/sizeof(arr[0]);

	cout<< "Before: ";
	for(int i=0; i<n; i++) cout<< arr[i]<< " ";
	sortNegative(arr, n);
	cout<< endl<< "After: ";
	for(int i=0; i<n; i++) cout<< arr[i]<< " ";
}