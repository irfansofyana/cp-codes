#include <bits/stdc++.h>
using namespace std;

long long n,m,i,temp,maks;
long long dp[100010];

int main(){
	cin >> n >> m;
	for (i=1;i<=n;i++) {
		cin >> temp;
		dp[i]=dp[i-1]+temp;
	}
	i=m;
	while (i<=n) {
		if (i==m) maks=dp[i]-dp[i-m];
		else if (dp[i]-dp[i-m]>maks) maks=dp[i]-dp[i-m];
		i++;
	}
	cout<<maks<<endl;
}
