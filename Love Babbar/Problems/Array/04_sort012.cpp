#include<bits/stdc++.h>

using namespace std;

void sort012(int arr[], int n)
{
	int count0=0, count1=0, count2=0;

	for(int i=0; i<n; i++)
	{
		if(arr[i] == 0) count0++;
		if(arr[i] == 1) count1++;
		if(arr[i] == 2) count2++;
	}

	for(int i=0; i<n; i++)
	{
		if(count0 > 0)
		{
			arr[i]= 0;
			count0--;
		}
		else if(count1 > 0)
		{
			arr[i]= 1;
			count1--;
		}
		else if(count2 > 0)
		{
			arr[i]= 2;
			count2--;
		}
	}
}

int main()
{
	int arr[]= {0, 2, 1, 2, 0};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	cout<< "Before: ";
	for(int i=0; i<n; i++) cout<< arr[i]<< " ";
	sort012(arr, n);
	cout<< endl<< "After: ";
	for(int i=0; i<n; i++) cout<< arr[i]<< " ";
}