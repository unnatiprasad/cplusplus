#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int c;
		cin>>c;
		if(c<=5-k)
		{
			count++;
		}
	}
	int teams=count/3;
	cout<<teams;
}
