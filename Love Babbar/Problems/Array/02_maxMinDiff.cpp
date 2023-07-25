#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[]= {-2, 1, -4, 5, 3};
	int mino= INT_MAX, maxo= INT_MIN, n= sizeof(arr)/sizeof(arr[0]);

	for(int i=0; i<n; i++)
	{
		mino= min(arr[i], mino);
		maxo= max(arr[i], maxo);
	}

	cout<< mino<< " + "<< maxo <<" = "<< mino + maxo;
}