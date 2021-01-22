#include <bits/stdc++.h>
#define fi first
#define pb push_back
#define se second
using namespace std;

typedef long long ll;

int t,tc;
ll n,i,j,ans,sz;
string s;
ll fibo[105];

void pre(){
	fibo[0] = 1; fibo[1] = 1;
	for (i = 2 ; i <= 91; i++) {
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	pre();
	cin >> t;
	while (t--) {
		cin >> s;
		sz = (ll)s.size();
		ans = fibo[sz];
		for (i = (ll)s.size()-1 ; i >= 1; i--) {
			if (s[i] != '0') {
				ans += fibo[(ll)s.size()-i];
			}
		}
		cout << "Case " << ++tc << ": " << ans << '\n';
	}
	return 0;
}
