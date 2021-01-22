#include <bits/stdc++.h>
#define INF 2000000000
using namespace std;

int n,i,j,ber;
int A[10005];
int dp[10005][1005];

int cari(int idx,int weight,int jalan) {
	if (idx==n && weight!=0) return INF;
	if (idx==n) return jalan;
	if (dp[idx][weight]==-1) {
		if (A[idx]>weight) {
			dp[idx][weight] = cari(idx+1,weight,jalan);
		}
		else dp[idx][weight] = min(cari(idx+1,weight-A[idx],jalan+1),cari(idx+1,weight,jalan));
	}
	return dp[idx][weight];
}

int main(){
	cin.tie(0);
	cin >> n >> ber;
	memset(dp,-1,sizeof dp);
	for (i = 0 ; i < n ; i++) cin >> A[i];
	sort(A,A+n);
	int ans = cari(0,ber,0);
	if (ans==INF) puts("-1");
	else cout << ans << endl;
	return 0;
}