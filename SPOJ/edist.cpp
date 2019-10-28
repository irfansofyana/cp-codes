#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string a,b;
ll n,m,i,j;
ll dp[2005][2005];

ll minn(ll x,ll y,ll z){
	ll tmp = min(x,y);
	return min(tmp,z);
}

ll edit_distance(ll n,ll m){
	if (n == 0) return m;
	if (m == 0) return n;
	if (dp[n][m] != -1) return dp[n][m];
	if (a[n-1] == b[m-1]) return dp[n][m] = edit_distance(n-1,m-1);
	return dp[n][m] = minn(edit_distance(n,m-1),edit_distance(n-1,m),edit_distance(n-1,m-1)) + 1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		memset(dp,-1,sizeof dp);
		cout << edit_distance((int)a.size(),(int)b.size()) << '\n';
	}
	return 0;
}