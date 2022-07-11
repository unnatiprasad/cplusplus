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
	for(int i=0;i<n;i++)
	{
		int swp=0;
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				swp++;
			}
		}
		if(swp==0)
		{
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
				
			}
			return 0;
		}
	}

}
