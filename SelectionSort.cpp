#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int mn=INT_MAX;
		int ind=0;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<mn)
			{
				mn=arr[j];
				ind=j;
				
			}
		}
		swap(arr[i],arr[ind]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

}
