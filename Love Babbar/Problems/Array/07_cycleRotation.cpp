#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
	int temp;
    for(int i=n-1; i>=0; i--)
    {
        if(i == n-1)
        {
            temp= arr[i];
            arr[i]= arr[i-1];
        }
        
        if(i == 0) arr[i]= temp;
        else arr[i]= arr[i-1];
    }
}

int main()
{
	int arr[]= {1,2,3,4,5};
	int n= sizeof(arr)/sizeof(arr[0]);

	cout<< "Before: ";
	for(int i=0; i<n; i++) cout<< arr[i]<< " ";
	rotate(arr, n);
	cout<< endl<< "After: ";
	for(int i=0; i<n; i++) cout<< arr[i]<< " ";
}