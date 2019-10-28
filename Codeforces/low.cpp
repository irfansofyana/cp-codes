#include <bits/stdc++.h>
#include <queue>
#define fi first
#define se second
#define pb push_back
using namespace std;

vector<int> arr;
int n,i,m;
priority_queue<pair<int,int>,vector<pair<int,int> >, greater<pair<int,int> > > pq;
int a,b,cost;
vector<pair<int,int> > adj[100];
int dist[100];

int main(){
	cin >> n >> m;
	for (i = 0 ; i < m ; i++) {
		cin >> a >> b >> cost;
		adj[a].pb({b,cost});
		adj[b].pb({a,cost});
	}
	for (i = 0 ; i <= n ; i++) {
		dist[i] = 100000000;
	}

	dist[1] = 0; pq.push({0,1}); 
	while (!pq.empty()){
		pair<int,int> tmp;
		tmp = pq.top();
		pq.pop();
		int jarak,titik;
		jarak = tmp.fi; titik = tmp.se;
		
		if (jarak > dist[titik]) continue;
		for (int z = 0 ; z < adj[titik].size(); z++) {
			if (dist[titik] + adj[titik][z].se < dist[adj[titik][z].fi]) {
				dist[adj[titik][z].fi] = dist[titik] + adj[titik][z].se;
				pq.push({dist[adj[titik][z].fi], adj[titik][z].fi});
			}
		}
	}

		for (int j = 1 ; j <= n ; j++) {
			cout << dist[j] << " "; 
		} cout << '\n';
	return 0;
}