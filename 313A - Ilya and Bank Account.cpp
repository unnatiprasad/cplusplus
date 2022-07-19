#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int num=0;
	num=n;
	if(n<0)
	{
		int last_dig=(-1*n)%10;
		int second_last_dig=(-1*n/10)%10;
		if(last_dig>=second_last_dig)
		{
			num=num/10;
		}
		if(second_last_dig>last_dig)
		{
			num=-1*((-1*n/100)*10+last_dig);
			
			//num=10*num+last_dig;
		}
	
	}
	
	
	cout<<num;
}
