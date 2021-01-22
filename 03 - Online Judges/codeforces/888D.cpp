#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, k;
ll derr[7] = {1,0,1,2,9,44,265};

ll com(ll a, ll b){
	ll bil = a-b;
	if (bil == 0) return 1;
	if (bil == 1) return a;
	if (bil == 2) return (a*(a-1))/2;
	if (bil == 3) return (a*(a-1)*(a-2))/6;
	return (a*(a-1)*(a-2)*(a-3))/24;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	ll ans = 0;
	for (ll i = n-k; i <= n; i++) {
		ans += com(n, i)*derr[n-i];
	}
	cout << ans << '\n';
	return 0;
}