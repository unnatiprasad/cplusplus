#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int prev=1;
	int prev2=0;
	int curr=0;
	for(int i=2;i<n+1;i++)
	{
		curr=prev+prev2;
		prev2=prev;
		prev=curr;
		
	}
cout<<curr;
	
	
}
