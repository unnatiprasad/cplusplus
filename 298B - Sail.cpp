#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	char s[t];
	for(long long int i=0;i<t;i++)
	{
		cin>>s[i];
		
	}
	long long int i=0;
	while(i<=t)
	{
		if(s[i]=='E'&&ex>sx)
		{
			sx++;
		}
		if(s[i]=='W'&&sx>ex)
		{
			sx--;
		}
		if(s[i]=='N'&&sy<ey)
		{
			sy++;
		}
		if(s[i]=='S'&&sy>ey)
		{
			sy--;
		}
		i++;
		if(sx==ex&&sy==ey)
		{
			cout<<i;
			return 0;
		}
	}
		cout<<-1;

}
