#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	long long int arr[n][2];
	long long int max_joy=INT_MIN;
	for(int i=0;i<n;i++)
	{
		long long int joy=0;
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
		if(arr[i][1]<k)
		{
			joy=arr[i][0];
		}
		if(arr[i][1]>=k)
		{
			joy=arr[i][0]-(arr[i][1]-k);
		}
		if(joy>max_joy)
		{
			max_joy=joy;
		}
	}
	cout<<max_joy;
}
