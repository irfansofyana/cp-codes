#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,k;
ll i,j;
ll ans;
vector<ll> arr;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	ans = (ll)1e18 + 7;
	for (i = 1 ; i <= (ll)sqrt(n); i++) {
		if (n%i == 0) {
			j = n/i;
			if (i >= (k*(k+1))/2) {
				ans = min(ans, i);
			}
			if (j >= (k*(k+1))/2) {
				ans = min(ans, j);
			}
		}
	}
	ll gcd = n/ans;
	if (ans == (ll)1e18 + 7 || (n==1 && k > 1) || ((double)(2*n))/(k) < (double)(k+1)) {
		cout << -1 << '\n';
		return 0;
	}
	ll bilangan = 0 ;
	bilangan = ans - (((k-1) * k)/2);
	if (bilangan%k == 0) {
		for (i = 0 ; i < k ; i++) {
			cout << gcd*((bilangan/k) + i) ;
			cout << (i == k-1 ? '\n' : ' ');
		}
		return 0;
	}
	else {
		bilangan /= k;
		ll sisa = ans - (bilangan*k + (((k-1)*k)/2));
		for (i = 0 ; i < k ; i++) {
			if (i >= k-sisa) cout << gcd*(bilangan + i) + gcd;
			else cout << gcd*(bilangan + i);
			cout << (i == k-1 ? '\n' : ' ');
		}
	}
	return 0;
}