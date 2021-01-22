#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

const int MAXN = 1e6;

int q, l, r, k;
int dp[MAXN+3][11];
int g[MAXN+3];

int f(int x){
	int res = 1;
	while (x > 0){
		res = (res * (x%10 == 0 ? 1 : x%10));
		x /= 10;
	}
	return res;
}

void isi(){
	for (int i = 1; i <= MAXN; ++i){
		for (int j = 1; j <= 9; ++j){
			dp[i][j] = dp[i-1][j];
		}
		if (i < 10) {
			++dp[i][i];
			g[i] = i;
		}else {
			g[i] = g[f(i)];
			++dp[i][g[i]]; 
		}	
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
 //    	freopen("in.txt", "r", stdin);
	// #endif
	isi();
    cin >> q;
    while (q--){
    	cin >> l >> r >> k;
    	cout << dp[r][k] - dp[l-1][k] << '\n';
    }
	return 0;
}