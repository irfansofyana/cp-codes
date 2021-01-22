#include <bits/stdc++.h>
using namespace std;

long long t, tc;
bool visit[1005], can;
vector<pair<long long,long long> > adj[1005];
long long dist[1005][1005];
long long n, m, x, k, val;

void DFS(long long node){
	visit[node] = true;
	if (visit[n] && val == k){
		can = true;
		return;
	}
	for (long long i = 0; i < adj[node].size(); i++){
		long long nxt = adj[node][i].first;
		if (!visit[nxt]){
			val = val | adj[node][i].second;
			DFS(nxt);
		}
	}
	visit[node] = false;
}

int main(){
	// scanf("%d", &t);
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--){
		// scanf("%d %d %d", &n, &m, &k);
		cin >> n >> m >> k;
		for (long long i = 0; i < m; i++){
			long long x, y, z;
			// scanf("%d %d %d", &x, &y, &z);
			cin >> x >> y >> z;
			if ((z|k) == k){
				dist[x][y]|=z;
				dist[y][x]|=z;
			}
		}
		for (long long i = 1; i <= n; i++){
			for (long long j = i+1; j <= n; j++){
				if (dist[i][j] > 0){
					adj[i].push_back({j, dist[i][i]|dist[i][j]});
					adj[j].push_back({i, dist[i][i]|dist[i][j]});
				}
			}
		}
		for (long long i = 1; i <= n; i++){
			for (long long j = 1; j <= n; j++)
				visit[j] = false;
			can = false;
			val = 0;
			DFS(i);
			if (can) break;
		}
		// if (can) prlong longf("Kasus #%d: Bisa\n", ++tc);
		// else prlong longf("Kasus #%d: Tidak\n", ++tc);
		if (can) cout << "Kasus #" << ++tc <<": Bisa\n";
		else cout << "Kasus #" << ++tc << ": Tidak\n";
		for (long long i = 1; i <= n; i++)
			for (long long j = 1; j <= n; j++)
				dist[i][j] = 0;
		for (long long i = 1; i <= n; i++) adj[i].clear();
	}
	return 0;
}