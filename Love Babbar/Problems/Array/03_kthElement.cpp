#include<bits/stdc++.h>

using namespace std;

int kthSmallest(int arr[], int k)
{
	int n= sizeof(arr)/sizeof(arr[0]), i=0, mino= arr[0];

	while(k>0 && i<n)
	{
		if(mino > arr[i]) 
		{
			mino= arr[i];
			k--;
		}
		i++;
	}

	return mino;
}

int main()
{
	int arr[]= {7, 10, 4, 3, 20, 15};
	int k=3;
	
	cout<< kthSmallest(arr, k);
}