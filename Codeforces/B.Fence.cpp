#include <bits/stdc++.h>
using namespace std;

int n,i,j,x,k;
int dp[1000000];
int ans,jaw;

int main(){
	scanf("%d %d",&n,&k);
	for (i=1;i<=n;i++) {
		scanf("%d",&x);
		dp[i] = dp[i-1]+x;
	}
	ans = 1000000000;
	i = k;
	while (i<=n) {
		if (dp[i]-dp[i-k]<ans) {
			ans = dp[i]-dp[i-k];
			jaw = i-k+1;
		}
		i++;
	}
	printf("%d\n",jaw);
}
