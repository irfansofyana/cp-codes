#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pl;

ll n,m,i,j;
vector<pl> arr;
ll x,y,butuh,waktu;
ll tc;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x >> y;
		arr.pb(mp(x,y));
	}
	cin >> m;
	while (m--) {
		cin >> butuh >> waktu;
		ll ans = -1;
		for (i = 0 ; i < (1 << n); i++){
			ll tenaga = 0;
			ll duit = 0;
			for (j = 0 ; j < n ; j++) {
				if ((i&(1 << j)) > 0){		//kita pilih
					tenaga += arr[j].fi;
					duit += arr[j].se;
				}
			}
			if (tenaga * waktu >= butuh) {
				if (ans == -1) ans = duit;
				else ans = min(ans,duit);
			}
		}
		cout << "Case " << ++tc << ": ";
		if (ans == -1) cout << "IMPOSSIBLE\n";
		else cout << ans << '\n';
	}
	return 0;
}