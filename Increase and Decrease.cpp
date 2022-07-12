#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	long long int sum=0;
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	
	if(sum==0)
	{
		cout<<n;
		return 0;
	}
	if(sum%n==0)
	{
		cout<<n;
	}
	else if(sum%n!=0)
	{
	cout<<n-1;
}}
