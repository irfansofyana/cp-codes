#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const ll MAXN = (ll)1e5;

ll n, m;
ll parent[MAXN+5];
ll arr[MAXN+5], nilai[MAXN+5];
bool udah[MAXN + 5];

ll cari(ll x){
	return (x == parent[x] ? x : parent[x] = cari(parent[x]));
}

void gabung(ll x, ll y){
	ll a = cari(x);
	ll b = cari(y);
	parent[a] = b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n ; i++) parent[i] = i;
	for (int i = 1 ; i <= n ; i++) cin >> arr[i];
	ll ans = 0;
	for (int i = 0 ; i < m ; i++) {
		ll x, y;
		cin >> x >> y;
		gabung(x,y);
	}
	memset(udah, false, sizeof udah);
	memset(nilai, -1, sizeof nilai);
	for (int i = 1; i <= n ; i++) {
		ll prr = cari(i);
		//cout << prr << " ";
		if (!udah[prr]) {
			udah[prr] = true;
			nilai[prr] = arr[i];
		}
		else {
			nilai[prr] = min(nilai[prr], arr[i]);
		}

	}
	for (int i = 1; i <= n ; i++) 
		if (nilai[i] != -1) ans += nilai[i];
	cout << ans << '\n';
	return 0;
}