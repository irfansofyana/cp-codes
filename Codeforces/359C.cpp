#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

const ll MOD = (ll)1e9 + 7;

ll n, x, sum;
ll arr[100005];
map<ll,ll> mep;

ll sqr(ll x){
	return ((x%MOD)*(x%MOD))%MOD;
}

ll pangkat(ll a,ll b){
	if (b == 0) return 1;
	else if (b == 1) return a%MOD;
	else if (b%2 == 0) return sqr(pangkat(a,b/2));
	else return ((a%MOD)*sqr(pangkat(a,(b-1)/2)))%MOD;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> x;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	vector<ll> pkt;
	for (int i = 0 ; i < n ; i++) {
		mep[sum - arr[i]]++;
		if (mep[sum-arr[i]] == 1) {
			pkt.pb(sum - arr[i]);
		}
	}
	ll ans = 1;
	for (auto i : mep) {
		if (i.se < x && i.se > 0) {
			ans = i.fi;
			break;
		}
		else {
			ll curr = i.se;
			ll tbh = 0;
			bool pertama = true;
			while (curr > 0) {
				ll sisa = curr%x;
				if (pertama) {
					pertama = false;
					i.se = sisa;
				}
				else {
					mep[i.fi + tbh] += sisa;
				}
				curr /= x;
				tbh++;
			}
			if (i.se < x && i.se > 0) {
				ans = i.fi;
				break;
			}
		}
	}
	ll atas = min(ans, sum); atas %= (MOD-1);
	cout << pangkat(x, atas) << '\n';
	return 0;
}