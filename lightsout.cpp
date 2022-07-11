#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	int sw[3][3];
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
	{
		int sum_hori=0;
		int sum_verti=0;
		for(int row=0;row<3;row++)
		{
			if(row!=i)
			{
				sum_verti+=arr[row][j];
			}
		}
		for(int col=0;col<3;col++)
		{
			if(col!=j)
			{
				sum_hori+=arr[i][col];
			}
		}
		sw[i][j]=arr[i][j]+sum_hori+sum_verti;
		}
		
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sw[i][j]%2!=0)
			{
				sw[i][j]=0;
			}
			else if(sw[i][j]%2==0)
			{
				sw[i][j]=1;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<sw[i][j];
		}
		cout<<endl;
	}
	
}
