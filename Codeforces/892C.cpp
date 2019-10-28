#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, arr[2005];

ll gcd(ll x,ll y){
	return (y == 0 ? x : gcd(y, x%y));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	int cnt = 0;
	ll fpb;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		if (arr[i] == 1) cnt++;
		if (i == 0) fpb = arr[i];
		else fpb = gcd(fpb, arr[i]);
	}
	ll mini = (ll)1e9;
	for (int i = 0 ; i < n ; i++) {
		ll bil = arr[i];
		ll x = 0;
		for (int j = i+1; j < n ; j++) {
			x++;
			bil = gcd(bil, arr[j]);
			if (bil == 1) {
				mini = min(mini, x);
				break;
			} 
		}
	}
	if (fpb != 1) cout << -1 << '\n';
	else if (cnt > 0) cout << min(mini + n - 1, n -cnt) << '\n';
	else cout << mini+n-1 << '\n';
	return 0;
}