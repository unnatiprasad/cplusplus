#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int ans=0;
	if(b<m*a)
	{
		ans=min((n/m)*b+(n%m)*a,(n/m+1)*b);
	}
	else
	{
		ans=n*a;
	}
	cout<<ans;
}
