#include<bits/stdc++.h>
using namespace std;
int n,x,y,dp[100110];
string s;
int main(){
	cin>>s;
	dp[0] = 0;
	for(int i=1;i<s.size();i++){
		if(s[i] == s[i-1]) dp[i] = dp[i-1] + 1;
		else dp[i] = dp[i-1];
	}
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&x,&y);
		printf("%d\n",dp[y-1]-dp[x-1]);
	}
}
