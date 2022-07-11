#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int no_100gm=0;
	int no_200gm=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
		if(arr[i]==100)
		{
			no_100gm++;
		}
		if(arr[i]==200)
		{
			no_200gm++;
		}
	}
no_200gm=no_200gm%2;
no_100gm=no_100gm-2*no_200gm;
if(no_100gm%2==0&&no_100gm>=0)
{
	cout<<"YES";
	return 0;
}
cout<<"NO";
}
