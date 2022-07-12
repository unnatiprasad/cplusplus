#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(i%2==0)
		{
			if(j%2==0)
			{
				if(arr[i][j]=='.')
				{
					arr[i][j]='B';
				}}
			else
				{
					if(arr[i][j]=='.')
					{
						arr[i][j]='W';
					}
				}
			}
		else
			{
			if(j%2==0)
			{
				if(arr[i][j]=='.')
				{
					arr[i][j]='W';
				}}
				else
				{
					if(arr[i][j]=='.')
					{
						arr[i][j]='B';
					}
				}
			
}}}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		cout<<arr[i][j];
	}
	cout<<endl;
	}	
	
}
