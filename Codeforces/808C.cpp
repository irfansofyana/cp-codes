#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

typedef long long ll;
using namespace std;

ll n,i,j,w;
pair<ll,ll> arr[105];
ll ans[105];

bool comp(pair<ll,ll> a,pair<ll,ll> b){
	return a.fi < b.fi;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> w;
	ll cek = 0;
	ll sum = 0;
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		arr[i] = {j,i};
		if (j%2 == 1) cek += (j+1)/2;
		else cek += j/2;
		sum += j;
	}
	if (cek > w || sum < w) {
		cout << -1 << '\n';
		return 0;
	}
	sort(arr,arr + n, comp);
	for (i = 0 ; i < n ; i++) {
		ans[arr[i].se] = (arr[i].fi%2 == 1 ? (arr[i].fi + 1)/2 : arr[i].fi/2);
	}
	w -= cek;
	//cout << w << '\n';
	for (i = n-1; i >= 0 ; i--) {
		//cout << arr[i].fi << " " << ans[arr[i].se] << '\n';
		if (w == 0) break;
		if (w >= arr[i].fi - ans[arr[i].se]) {
			w -= (arr[i].fi - ans[arr[i].se]);
			ans[arr[i].se] = arr[i].fi;
		}
		else {
			ans[arr[i].se] += w;
			w = 0;
		}
		if (w == 0) break;
	}
	if (w != 0) {
		cout << -1 << '\n';
		return 0;
	}
	for (i = 0 ; i < n ; i++) {
		cout << ans[i] ;
		cout << (i == n-1 ? '\n' : ' ');
	}
	return 0;
}