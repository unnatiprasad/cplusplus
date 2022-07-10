#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	string s=s1+s2;
	sort(s.begin(),s.end());
	sort(s3.begin(),s3.end());	
	if(s.size()!=s3.size())
	{
		cout<<"NO";
		return 0;
	}
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s3[i])
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
