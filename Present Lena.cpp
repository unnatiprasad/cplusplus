#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int t=n;
	for(int i=0;i<=n;i++)
	{
		for(int i=0;i<2*t;i++)
		{
			cout<<" ";
		}
		cout<<0;
		for(int j=1;j<=i;j++)
		{
			cout<<" "<<j;
		}
		for(int j=1;j<=i;j++)
		{
			cout<<" "<<i-j;
		}
	
		t--;
	
	cout<<endl;
	}
	t=1;
	for(int i=n-1;i>=0;i--)
	{
		for(int i=0;i<2*t;i++)
		{
			cout<<" ";
		}
		cout<<0;
		for(int j=1;j<=i;j++)
		{
			cout<<" "<<j;
		}
		for(int j=1;j<=i;j++)
		{
			cout<<" "<<i-j;
		}
	
		t++;
	
	cout<<endl;
	}
	
}
