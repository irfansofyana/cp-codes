#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,k,l;
char A[105][105];
ll dp[105][105];
ll ans,frek;

bool cek(ll x1,ll x2,ll y1,ll y2){
	for (ll z = x1 ; z <= x2; z++){
		for (ll zz = y1 ; zz <= y2 ; zz++){
			if (A[z][zz]=='0') return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n ){
		if (n==0) return 0;
		else cin >> m;
		if (m==0) return 0;
		memset(dp,0,sizeof dp);
		for (i = 0 ; i < n ; i++)
			for (j = 0 ;j < m; j++){
				cin >> A[i][j];
				dp[i][j] = (A[i][j] == '1' ? 1 : 0);
				if (i > 0) dp[i][j] += dp[i-1][j];
				if (j > 0) dp[i][j] += dp[i][j-1];
				if (i > 0 && j > 0) dp[i][j] -= dp[i-1][j-1];
			}
		/*for (i = 0 ; i < n ; i++){
			for (j = 0 ; j < m ; j++) 
				cout << dp[i][j] << " ";
			cout << '\n';
		}*/
		ans = 0;
		for (i = 1 ; i <= n ; i++) {
			for (j = 1 ; j <= m ; j++) {
				for (k = 0 ; k < n-i+1; k++){
					for (l = 0 ; l < m-j+1; l++) {
						//start in A[k][l] end in A[k+i-1][l+j-1]
						ll tot = dp[k+i-1][l+j-1];
						if (k > 0) tot -= dp[k-1][l+j-1];
						if (l > 0) tot -= dp[k+i-1][l-1];
						if (k > 0 && l > 0) tot += dp[k-1][l-1];
						//if (k==1 && l==1 && i==1 && j==1) cout << tot << '\n';
						if (tot==i*j) {
							//cout << k << " " << l << " " << i << " " << j << '\n';
							ans++;
						}
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}