#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int dp[1005];

int cari(int n){
	if (dp[n]!=-1) return dp[n];
	if (n < 12) return n;
	return dp[n] = cari(n/2) + cari(n/3) + cari(n/4);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	memset(dp,-1,sizeof dp);
	cout << cari(n) << '\n';
	return 0;
}