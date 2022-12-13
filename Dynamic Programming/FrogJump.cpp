
'''Using Recursive Solution - Time Limit Exceeded'''
#include <bits/stdc++.h>
using namespace std;
int f(int ind,vector <int> &heights)
{
    if(ind==0)
    {
        return 0;
    }
    int left=f(ind-1,heights)+abs(heights[ind]-heights[ind-1]);
    int right=INT_MAX;
    if(ind>1)
    {
        right=f(ind-2,heights)+abs(heights[ind]-heights[ind-2]);
    }
   return min(left,right);
    
}
int frogJump(int n,vector <int> &heights)
{
    return f(n-1,heights);
}

----------------------------------------------------------------------------------------------------------------------------------------------
  "Using Dynamic Programming"
  
  #include <bits/stdc++.h>
using namespace std;
int ff(int n,vector <int> &heights,vector <int> &dp)
    
{
    if(dp[n-1]!=-1)
    {
        return dp[n-1];
    }
    if(n==1)
    {
        return 0;
    }
    int left=ff(n-1,heights,dp)+abs(heights[n-1]-heights[n-2]);
    int right=INT_MAX;
    if(n>2)
    {
        right=ff(n-2,heights,dp)+ abs(heights[n-1]-heights[n-3]);
    }
    return dp[n-1]=min(left,right);
}
int frogJump(int n,vector <int> &heights)
{
    vector <int> dp(n+1,-1);
    return ff(n,heights,dp);
}
int main()
{
	int n;
	cin>>n;
	vector <int> heights;
	for(int i=0;i<n;i++)
	{
		cin>>heights[i];
	}
	cout<<frogJump(n,heights);
}
