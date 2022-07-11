#include <bits/stdc++.h>
using namespace std;
bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
vector <vector<int>> v;
for(int i=0;i<n;i++)
{
	v.push_back({arr[i],i+1});
	
}

sort(v.begin(), v.end(), sortcol);
for(auto it:v)
{
	cout<<it[1]<<" ";
}
}
