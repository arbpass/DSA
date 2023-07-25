#include<bits/stdc++.h>
using namespace std;

int unionArr(int arr1[], int n, int arr2[], int m)
{
	set<int> s;

	for(int i=0; i<n; i++) s.insert(arr1[i]);
	for(int i=0; i<m; i++) s.insert(arr2[i]);

	return s.size();
}

int main()
{
	int arr1[] = {1,2,3,4,5}, arr2[] = {1,2,3};
	int n= sizeof(arr1)/sizeof(arr1[0]), m= sizeof(arr2)/sizeof(arr2[0]);

	cout<< unionArr(arr1, n, arr2, m);
}