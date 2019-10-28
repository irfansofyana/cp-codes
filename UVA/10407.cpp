#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()

using namespace std;

typedef long long ll;

ll n,i,j,bil,ans;
vector<ll> arr;

inline ll cari(ll a, ll b){
	if (a >= 0) return a%b;
	else return (b - abs(a)%b)%b;
}

inline bool cek(ll x){
	ll tmp;
	for (int z = 0 ; z < arr.size(); z++) {
		if (z == 0) {
			tmp = cari(arr[z], x);
		}
		else if (cari(arr[z],x)!=tmp) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n) {
		if (n == 0) return 0;
		else {
			arr.pb(n);
			while (cin >> n) {
				if (n == 0) break;
				else arr.pb(n);
			}
			sort(arr.begin(),arr.end());
			ans = -10000;
			bil = arr[sz(arr) - 1] - arr[0];
			for (i = 1 ; i <= (ll)sqrt(bil); i++){
				if (bil%i == 0) {
					if (cek(i)) ans = max(ans,i);
					j = bil/i;
					if (cek(j)) ans = max(ans,j);
				}
			}
			cout << ans << '\n';
			arr.clear();
		}
	}
	return 0;
}
