#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k,l;
int dp[30][30];
char arr[30][30];
int t,ans;
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		memset(dp,0,sizeof dp);
		cin >> s;
		n = (int)s.size();
		for (i = 0 ; i < n ; i++)
			arr[0][i] = s[i];
		for (i = 1 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++)
				cin >> arr[i][j];
		}
		
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n; j++) {
				if (arr[i][j]=='1') {
					dp[i][j] = 1;
				}
				else dp[i][j] = 0;
				if (i > 0) dp[i][j] += dp[i-1][j];
				if (j > 0) dp[i][j] += dp[i][j-1];
				if (i > 0 && j > 0) dp[i][j] -= dp[i-1][j-1];
			}
		}
		ans = 0;
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < n ; j++) {
				for (k = i ; k < n ; k++) {
					for (l = j ; l < n ; l++) {
						//start (i,j) end (k,l)
						int x = dp[k][l];
						if (i > 0) x -= dp[i-1][l];
						if (j > 0) x -= dp[k][j-1];
						if (i > 0 && j > 0) x += dp[i-1][j-1];
						if (x==(k-i+1)*(l-j+1)) ans = max(ans,x);
					}
				}
			}
		}
		cout << ans << '\n';
		if (t!=0) cout << '\n';
	}
	return 0;
}