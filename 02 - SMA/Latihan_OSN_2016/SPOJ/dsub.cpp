#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long ll;

string s;
ll n,i,j;
ll dp[100005];
int terakhir[30];

ll modulo(ll x,ll y){
	if (x >= y) return (x-y)%MOD;
	if (x < y){
		ll tmp = x-y;
		if (abs(tmp)%MOD == 0) return 0;
		tmp = abs(tmp);
		tmp /= MOD;
		return (tmp + 1) * MOD + x-y;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> s;
		memset(terakhir,-1,sizeof terakhir);
		dp[0] = 1;
		for (i = 1 ; i <= (int)s.size(); i++){
			dp[i] = dp[i-1]*2;
			if (terakhir[s[i-1]-'A']!=-1) {
				dp[i] = modulo(dp[i],dp[terakhir[s[i-1]-'A']-1]);
			}
			terakhir[s[i-1]-'A'] = i;
			if (dp[i] >= MOD) dp[i] %= MOD;
		}
		cout << dp[i-1]%MOD << '\n';
	}
	return 0;
}