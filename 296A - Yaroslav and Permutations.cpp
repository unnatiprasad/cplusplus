#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	unordered_map <int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
		
	}
	bool ans=1;
	int res;
	if(n%2==0)
	{
		res=n/2;
	}
	if(n%2!=0)
	{
		res=(n/2)+1;
	}
	for(auto it:mp)
	{
		if(
		it.second>res)
		{
			ans=0;
		}
	}
	if(ans==1)
	{
		cout<<"YES";
	}
	else
	cout<<"NO";
}
