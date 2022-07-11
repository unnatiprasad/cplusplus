#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
getline(cin,s1);
getline(cin,s2);
s1.erase(std::remove(s1.begin(),s1.end(),' '),s1.end());
s2.erase(std::remove(s2.begin(),s2.end(),' '),s2.end());
	for(int i=0;i<s2.size();i++)
	{
		string str;
		str+=s2[i];
		if (s1.find(str)!= string::npos)
        {
        	s1[s1.find(str)]='*';
		}
        else if (s1.find(str)== string::npos)
        {
        	cout<<"NO";
        	return 0;
		}
	}
	cout<<"YES";
}
