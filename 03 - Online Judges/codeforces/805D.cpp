#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9+7;

string s;
ll ans, cnt;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (int i = (int)s.size()-1; i >= 0; i--) {
		if (s[i] == 'a') {
			ans += cnt;
			cnt *= 2;
			cnt %= MOD;
			ans %= MOD;
		}
		else {
			cnt ++;
			cnt %= MOD;
		}
	}
	cout << ans << '\n';
	return 0;
}