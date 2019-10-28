#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long LL; 

const LL INF = 1e15;
int T, V, E;
LL dist[505];
vector<pair<int,LL> > adj[505];

int main(){
	scanf("%d", &T);
	while (T--){
		scanf("%d %d", &V, &E);
		for (int i = 0; i < E; i++){
			int a, b;
			LL c;
			scanf("%d %d %lld", &a, &b, &c);
			adj[a].pb({b, c});
		}
		for (int i = 0; i < 505; i++)
			dist[i] = INF;
		dist[0] = 0;
		for (int i = 0; i < V-1; i++){
			for (int j = 0; j < V; j++){
				for (int k = 0; k < (int)adj[j].size(); k++){
					pair<int,LL> v = adj[j][k];
					if (dist[j] != INF)
						dist[v.first] = min(dist[v.first], dist[j] + v.second);
				}
			}
		}
		bool isCycle = false;
		for (int i = 0; i < V && !isCycle; i++){
			for (int j = 0; j < (int)adj[i].size() && !isCycle; j++){
				pair<int,LL> v = adj[i][j];
				if (dist[i] != INF && dist[v.first] > dist[i] + v.second) isCycle = true;
			}
		}
		if (isCycle) printf("Pak Dengklek tidak mau pulang\n");
		else if (dist[V-1] == INF) printf("Tidak ada jalan\n");
		else printf("%lld\n", dist[V-1]);
		for (int i = 0; i < V; i++)
			adj[i].clear();
	}
	return 0;
}