#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++)
	
{
	cin>>arr[i];
	sum+=arr[i];
	
}
sort(arr,arr+n);
int t=n-1;
int res_sum=0;
int cnt=0;
while(res_sum<=sum/2)
{
	res_sum+=arr[t];
	t--;
	cnt++;
}
cout<<cnt;
}
