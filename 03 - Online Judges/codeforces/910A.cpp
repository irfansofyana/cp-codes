#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, d;
ll dp[105];
string s;

ll cari(ll now){
	if (now == n-1) return 0;
	if (dp[now] != -1) return dp[now];
	ll res = 1000000;
	for (int i = 1; i <= d; i++)
		if (now + i < s.size() && s[now + i] == '1') res = min(res, cari(now+i)+1);
	return dp[now] = res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> d;
	cin >> s;
	memset(dp, -1, sizeof dp);
	cout << (cari(0) >= 1000000 ? -1 : cari(0)) << '\n';
	return 0;
}