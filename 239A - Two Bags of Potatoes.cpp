#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int y,k,n;
	cin>>y>>k>>n;
	bool t=0;
	for(long long int i=k-y%k;i<=n-y;i+=k)
	{
		if((i+y)%k==0)
		{
			cout<<i<<" ";
			t=1;
		}
	}
	if(!t)
	{
		cout<<-1;	}
	
}
