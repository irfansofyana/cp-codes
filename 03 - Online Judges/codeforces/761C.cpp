#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()

using namespace std;

const int INF = (int)1e9;

int n, m;
int dp[52][3][3][3];
string s[52];

int cari(int now,int dig,int sym,int alf){
	if (now == n && dig == 1 && sym == 1 && alf == 1) return 0;
	if (now == n) return INF;
	if (dp[now][dig][sym][alf] != -1) return dp[now][dig][sym][alf];
	int mini = INF;
	for (int i = 0 ; i < m ; i++) {
		if (s[now][i] >= 'a' && s[now][i] <= 'z') {
			mini = min(mini, min(i, m - i) + cari(now + 1, dig, sym, 1));
		}
		else if (s[now][i] >= '0' && s[now][i] <= '9') {
			mini = min(mini, min(i, m - i) + cari(now + 1, 1, sym, alf));
		}
		else 
			mini = min(mini, min(i, m - i) + cari(now + 1, dig, 1, alf));
	}
	return dp[now][dig][sym][alf] = mini;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++) cin >> s[i];
	memset(dp, -1, sizeof dp);
	cout << cari(0, 0, 0, 0) << '\n';
	return 0;
}