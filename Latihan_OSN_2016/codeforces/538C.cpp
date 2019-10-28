#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,m,i,j,beda;
pll arr[100005];
ll maks,tmp,bil;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < m ; i++) {
		ll x,y;
		cin >> x >> y;
		arr[i] = mp(x,y);
	}
	for (i = 1 ; i < m ; i++) {
		if (arr[i].first-arr[i-1].first < abs(arr[i].second - arr[i-1].second)) {
			cout << "IMPOSSIBLE\n";
			return 0;
		}
	}
	ll ans = 0;
	ans = max(ans,arr[0].first-1+arr[0].second);
	i = 1;
	while (i < m){
		while (i < m && arr[i].first-arr[i-1].first == 1) {
			ans = max(ans,max(arr[i].second,arr[i-1].second));
			i++;
		}
		if (i < m) { 
			beda = arr[i-1].second-arr[i-1].first + arr[i].first + arr[i].second;
			beda /= 2;
			ans = max(ans,max(max(arr[i-1].second,arr[i].second),beda));
			i++;
		}
		else {
			ans = max(ans,n-arr[i-1].first + arr[i-1].second);
		}
	}
	if (m == 1) {
		ans = max(n-arr[0].first+arr[0].second,arr[0].first-1+arr[0].second);
	}
	cout << ans << '\n';
	return 0;
}