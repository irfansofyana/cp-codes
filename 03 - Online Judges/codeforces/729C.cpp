#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const ll N = 200000;

ll n,k,s,t;
ll i,j;
vector<ll> arr;
ll kap[N + 5], cost[N + 5];
ll tmp[N + 5], prefix[N + 5];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k >> s >> t;
	for (i = 0 ; i < n ; i++) {
		cin >> cost[i] >> kap[i];
	}
	for (i = 0 ; i < k ; i++) {
		cin >> tmp[i];
	}
	sort(tmp,tmp + k);
	arr.pb(tmp[0]);
	for (i = 0 ; i < k-1 ; i++){
		arr.pb(tmp[i+1] - tmp[i]);
	} 
	arr.pb(s - tmp[k-1]);
	sort(arr.begin(),arr.end());
/*	cout << '\n';
	for (i = 0 ; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}cout << '\n';
	cout << '\n';*/
	for (i = 0 ; i < (ll)arr.size(); i++) {
		if (i == 0) prefix[i] = arr[i];
		else prefix[i] = arr[i] + prefix[i-1];
	}
	/*
	for (i = 0 ; i < arr.size(); i++) {
		cout << prefix[i] << " ";
	}cout << '\n';*/
	ll ans = (ll)1e18;
	for (i = 0 ; i < n ; i++) {
		ll awal = 0;
		ll akhir = (ll)arr.size() - 1;
		ll lastt = 0;
		if (kap[i] < arr[akhir]) continue;
		while (awal <= akhir) {
			ll mid = (awal + akhir)/2;
			if (2*arr[mid] <= kap[i]){
				lastt = mid;
				awal = mid + 1;
			}
			else {
				akhir = mid - 1;
			}
		}
	//	cout << "akhir " << i << " " << lastt << " ";
		ll abis = 0;
		abis += prefix[lastt];
		//cout << abis << '\n';
		abis += 3*(prefix[(ll)arr.size()-1] - prefix[lastt]) - ((ll)arr.size()-1 - (lastt + 1) + 1)*kap[i];
		//cout << i << " " << abis << '\n';
		if (abis <= t) {
			ans = min(ans, cost[i]);
			//cout << abis << '\n';
		}
	}
	if (ans == (ll)1e18) cout << -1 << '\n';
	else cout << ans << '\n';
	return 0;
}