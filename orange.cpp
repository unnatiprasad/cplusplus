#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[k];
	int hashh[n*k+1]={1};
	
	vector <vector<int>> oranges_given;
	for(int i=0;i<k;i++)
	{
		cin>>arr[i];
		hashh[arr[i]]=0;
		oranges_given[i].push_back(arr[i]);
	}
for(int i=0;i<oranges_given.size();i++)
{
	for(int j=0;j<oranges_given[i].size();j++)
	{
		cout<<oranges_given[i][j];
	}
	}	}

	/*int nth_candy=1;	
for(int j=0;j<k;j++)
{
	while(oranges_given[j].size()!=n)
	{
		if(hashh[nth_candy]!=0)
		{
			oranges_given[j].push_back(nth_candy);
			
		}
		nth_candy++;
	}}

}*/
