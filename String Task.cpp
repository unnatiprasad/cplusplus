#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string ss="aeiouy";
	string cap="AEIOUY";
	for(int i=0;i<6;i++)
	{
	s.erase(remove(s.begin(), s.end(), ss[i]), s.end());
}
for(int i=0;i<6;i++)
	{
	s.erase(remove(s.begin(), s.end(), cap[i]), s.end());
}

for(int i=0;i<s.size();i++)
{
	if(s[i]>='A'&&s[i]<='Z')
	{
		s[i]=s[i]-'A'+'a';
	}
}

string ans;
for(int i=0;i<s.size();i++)
{
  ans+='.';
  ans+=s[i];
}
cout<<ans;
}
