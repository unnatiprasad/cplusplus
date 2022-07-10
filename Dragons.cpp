#include <bits/stdc++.h>
using namespace std;
bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}
int main()
{
	int s,n;
	cin>>s>>n;
	vector <vector<int>> v;
	for(int i=0;i<n;i++)
	{
		vector <int> c;
		for(int j=0;j<2;j++)
		{
			int t;
			cin>>t;
			c.push_back(t);
		}
		v.push_back(c);
	}
    sort(v.begin(), v.end(), sortcol);
    int strength=s;
	for(int i=0;i<n;i++)
	{
		if(strength-v[i][0]<=0)
		{
			cout<<"NO";
			return 0;
		}
		
		strength+=v[i][1];
		
		 }     
cout<<"YES";
}
