#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	cin>>n>>m;
	//n boys, m girls
	if(n<=m)
	{
		for(int i=0;i<2*n;i+=2)
		{
			cout<<'G';
			cout<<'B';	
		}
		
		for(int i=0;i<m-n;i++)
		{
			cout<<'G';
		}
	}
		if(m<n)
	{
		for(int i=0;i<2*m;i+=2)
		{
			cout<<'B';
			cout<<'G';	
		}
		
		for(int i=0;i<n-m;i++)
		{
			cout<<'B';
		}
	}
}
