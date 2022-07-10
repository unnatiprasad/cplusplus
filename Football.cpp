#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int cnt=0;
	char c=s[0];
	int mx=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(s[i]==c)
		{
			cnt++;
			if(cnt==7)
			{
				cout<<"YES";
				return 0;
			}
		}
		
		else
		{
			cnt=1;
			c=s[i];
		}
		
			
		
	}
	cout<<"NO";
}
