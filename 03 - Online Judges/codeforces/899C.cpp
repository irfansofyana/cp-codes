#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, sum;
vector<ll> ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	sum = (n*(n+1))/2;
	if (sum%2 == 0) cout << 0 << '\n';
	else cout << 1 << '\n';
	ll target = sum/2;
	ll i = n;
	while (target > 0 && i > 0) {
		while (i > 0 && i > target) i--;
		ans.pb(i);
		target -= i;
		i--;
	}
	cout << ans.size();
	for (auto a : ans) cout << " " << a;
	cout << '\n';
	return 0;	
}