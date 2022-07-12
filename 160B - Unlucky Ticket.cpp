#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	string l,r;
	l=str.substr(0,n);
	r=str.substr(n,n);
	sort(l.begin(),l.end());
	sort(r.begin(),r.end());
	if(l[0]>r[0])
	{
	for(int i=0;i<n;i++)
	{
	      if(l[i]<=r[i])
		  		  {
		  	cout<<"NO";
		  	return 0;
			  }	
	}}
		if(l[0]<r[0])
	{
	for(int i=0;i<n;i++)
	{
	      if(l[i]>=r[i])
		  {
		  	cout<<"NO";
		  	return 0;
			  }	
	}}
	if(l[0]==r[0])
	{
		cout<<"NO";
		return 0;
	}
	
    cout<<"YES";
    
}
