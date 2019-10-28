#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define INF 100000000000000
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

int t;
ll n,m,i,j,awal,akhir;
ll a,b,cost;
vector<pll> arr[20005];
ll dist[20005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	int tc = 0;
	while (t--) {
		cin >> n >> m >> awal >> akhir;
		//awal--; akhir--;
		priority_queue<pll,vector<pll>, greater<pll> > pq;
		for (i = 0 ; i <= n ; i++) dist[i] = INF;
		while (m--) {
			cin >> a >> b >> cost;
			//a--; b--;
			arr[a].pb({b,cost});
			arr[b].pb({a,cost});
		}
		dist[awal] = 0; pq.push({0,awal});
		while (!pq.empty()){
			pll tmp = pq.top(); pq.pop();
			ll jarak = tmp.fi; 
			ll now = tmp.se;
			if (jarak > dist[now]) continue;
			for (int z = 0 ; z < arr[now].size(); z++) {
				pll temp = arr[now][z];
				if (jarak + temp.se < dist[temp.fi]) {
					dist[temp.fi] = jarak + temp.se;
					pq.push({dist[temp.fi], temp.fi});
				}
			}
		}
		cout << "Case #" << ++tc << ": ";
		if (dist[akhir] == INF) cout << "unreachable\n";
		else cout << dist[akhir] << '\n';
 		for (i = 0 ; i <= n ; i++) arr[i].clear();
	}
	return 0;
}