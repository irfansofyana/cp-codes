#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MAXN = (ll)2e5;

ll N, K;
ll arr[MAXN+5], nilai[MAXN+5];
pair<ll,ll> maks[MAXN+5];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> K;
	for (int i = 1 ; i <= N; i++) {
		cin >> arr[i];
		arr[i] += arr[i-1];
	}
	for (int i = 1; i <= N-K+1; i++) {
		ll kanan = arr[i + K - 1];
		ll kiri = arr[i-1];
		nilai[i] = kanan - kiri;
	}
	for (int i = N - K + 1 ; i >= 1; i--) {
		if (i == N- K + 1) {
			maks[i] = {nilai[i],i};
		}
		else {
			if (nilai[i] >= maks[i + 1].fi) {
				maks[i] = {nilai[i], i};
			}
			else maks[i] = maks[i+1];
		}
	}
	ll ans = 0; ll idx1 = 0, idx2 = 0;
	for (int i = 1; i <= N-2*K+1; i++) {
		if (nilai[i] + maks[i+K].fi > ans) {
			ans = nilai[i] + maks[i+K].fi;
			idx1 = i; idx2 = maks[i+K].se;
		}
	}
	cout << idx1 << " " << idx2 << '\n';
	return 0;
}