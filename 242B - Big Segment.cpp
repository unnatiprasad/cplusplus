#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int arr[n][2];
	long long int min_0=INT_MAX;
	long long int max_1=INT_MIN;
	for(long long int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
		if(arr[i][0]<min_0)
		{
			min_0=arr[i][0];
		}
		if(arr[i][1]>max_1)
		{
			max_1=arr[i][1];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i][0]==min_0&&arr[i][1]==max_1)
		{
			cout<<i+1;
			return 0;
		}
	}
	
	cout<<-1;
}
