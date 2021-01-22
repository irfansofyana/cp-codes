#include <bits/stdc++.h>
using namespace std;
 
long long dp[1010][110],mod=1000000007;
 
long long solve(int n, int k)
{
	if(n<k)	return 0;
	if(k<0)	return 0;
	if(n<0)	return 0;
	if(k==0)	return 1;
	if(n==0)
	{
		if(k==0)	return 1;
		else	return 0;
	}
	if(dp[n][k]!=-1)
	{
		return dp[n][k];
	}
	long long sum=0;
	sum+=solve(n-1,k) + 2*solve(n-1,k-1) - 2*solve(n-2,k-2);
	if(sum>=mod)	sum=sum%mod;
	while(sum<0)	sum+=mod;
	dp[n][k]=sum;
	return sum;
}
 
int main()
{
	memset(dp,-1,sizeof(dp));
	int t;
	scanf("%d",&t);
	long long ans[1010][110];
	memset(ans,0,sizeof(ans));
	int temp,temp2;
	for(temp=1;temp<=1000;temp++)
	{
		for(temp2=0;temp2<=100;temp2++)
		{
			long long x=solve(temp,temp2);
			ans[temp][temp2]=x;
			if(temp2!=0)	ans[temp][temp2]+=ans[temp][temp2-1];
			ans[temp][temp2]=ans[temp][temp2]%mod;
 
		}
	}
	//printf("%lld\n",solve(2,1));
	while(t--)
	{
		int n,k;
		scanf("%d %d",&n,&k);
		int temp;
		n-=2;
		if(n<0)	n=0;
		if(n==0)
		{
			printf("1\n");
			continue;
		}
 
		long long sum=ans[n][k];
		sum=sum%mod;
		printf("%lld\n",sum);
	}
}