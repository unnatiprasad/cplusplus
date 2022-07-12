#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,A,B,C;
	cin>>n>>A>>B>>C;
	int a,b,c;
	vector <int>v;
	v.push_back(A);
	v.push_back(B);
	v.push_back(C);
	sort(v.begin(),v.end());
	a=v[2];
	b=v[1];
	c=v[0];
	//a>b>c
	int ans=0;
//i*a+j*b+k*c==n
int pieces=0;
for(int i=0;i*a<=n;i++)
{
	for(int j=0;j*b+i*a<=n;++j)
	{
		int k=(n-i*a-j*b)/c;
		if(i*a+j*b+k*c==n)
		{
			
			pieces=max(pieces,i+j+k);
		
		}
		
	}
}
if(pieces>0)
{
	cout<<pieces;
	return 0;
}
cout<<-1;
}
