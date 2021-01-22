#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,m,t,i,j;
vector<ll> arr[250005];
bool tol[505][505];
ll awal,akhir;
ll dist[505],ntol[505];
queue<ll> antrian;
ll x,y;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m >> t >> awal >> akhir;
	/*if (n == 1) {
		if (awal == akhir) cout << 0 << '\n';
		else cout << -1 << '\n';
		return 0
	}*/
	for (i = 0 ; i < m ; i++) {
		cin >> x >> y;
		arr[x].pb(y);
		arr[y].pb(x);	
	}
	for (i = 0 ; i < t; i++) {
		cin >> x >> y;
		arr[x].pb(y);
		arr[y].pb(x);
		tol[x][y] = true;
		tol[y][x] = true;
	}
	/*if (n == 1) {
		if (awal == akhir) cout << 0 << '\n';
		else cout << -1 << '\n';
		return 0
	}*/
	for (i = 0 ; i <= n ; i++) dist[i] = INT_MAX;
	dist[awal] = 0; ntol[awal] = 0;
	antrian.push (awal);
	while (!antrian.empty()){
		ll kota = antrian.front();
		antrian.pop();
		for (ll z = 0 ; z < arr[kota].size(); z++) {
			ll next_kota = arr[kota][z];
			if (tol[kota][next_kota]) {
				if (dist[kota] + 1 < dist[next_kota] && ntol[kota] == 0) {
					dist[next_kota] = dist[kota] + 1;
					ntol[next_kota] = ntol[kota] + 1;
					antrian.push(next_kota);
				}
				else if (dist[kota] + 1 == dist[next_kota] && ntol[kota] + 1 < ntol[next_kota]) {
					dist[next_kota] = dist[kota] + 1;
					ntol[next_kota] = ntol[kota] + 1;
					antrian.push(next_kota);
				}
			}
			else {
				if (dist[kota] + 1 < dist[next_kota]) {
					dist[next_kota] = dist[kota] + 1;
					ntol[next_kota] = ntol[kota];
					antrian.push(next_kota); 
				}
				else if (dist[kota] + 1 == dist[next_kota] && ntol[kota] < ntol[next_kota] && ntol[kota] <= 1) {
					ntol[next_kota] = ntol[kota];
					antrian.push(next_kota);
				}
				else if (dist[kota] + 1 > dist[next_kota] && ntol[kota] < ntol[next_kota] && ntol[kota] <= 1) {
					ntol[next_kota] = ntol[kota];
					antrian.push(next_kota);
				}
			}
		}
	}
	cout << (dist[akhir] == INT_MAX ? -1 : dist[akhir]) << '\n';
	return 0;
}