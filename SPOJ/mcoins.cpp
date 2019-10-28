#include <bits/stdc++.h>
using namespace std;

int l,k,i,j;
int n,m;
int A[1000005];
int dp[1000005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> k >> l >> n;
	for (i = 0 ; i < n ; i++){
		cin >> A[i];
	}
	memset(dp,-1,sizeof dp);
	for (i = 1; i <= 1000000; i++) {
		if (i==1) dp[i] = 1;
		else {
			int x,y;
			x = i-k; y = i-l;
			if (dp[i-1]==0) dp[i] = 1;
			else if (x>=1 && dp[x]==0) dp[i] = 1;	
			else if (y>=1 && dp[y]==0) dp[i] = 1;
			else if (i==k || i==l) dp[i] = 1;
			else dp[i] = 0;
		}
	}
	for (i = 0; i<n ;i++) {
		cout << (dp[A[i]]==1?'A':'B');
	}
	cout << '\n';
	return 0;
}