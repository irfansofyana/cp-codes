#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9 + 7;
const ll MAXN = (ll)2e6;

string s;
ll ans, curr, depan;
ll sep[MAXN+5];

void isi(){
	sep[0] = 1;
	for (int i = 1; i <= MAXN+4; i++) {
		sep[i] = 10*sep[i-1];
		sep[i] %= MOD;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> s;
	curr = 1;
	for (int i = 0 ; i < s.size(); i++) {
		depan += curr*(s[i]-'0');
		depan %= MOD; curr++;
		ans += depan*sep[(int)s.size()-1-i];
		ans %= MOD;
	}
	cout << ans << '\n';
	return 0;
}