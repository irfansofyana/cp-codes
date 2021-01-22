#include <bits/stdc++.h>
using namespace std;

int T, N, M, node1, node2;
vector<pair<int,pair<int,int> > > edge;
int parent[1005];
pair<int, pair<int,int> > tmp;
bool chosen[1000005];

int cari(int x){
	return (parent[x] == x ? x : parent[x] = cari(parent[x]));
}

void gabung(int a,int b){
	int x = cari(a);
	int y = cari(b);
	parent[x] = y;
}

bool comp(pair<int,pair<int,int> > a, pair<int,pair<int,int> > b){
	return a.first < b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		cin >> N >> M;
		for (int i = 1; i <= N; i++) 
			parent[i] = i;
		edge.clear();
		memset(chosen, false, sizeof chosen);
		for (int i = 0; i < M; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			edge.push_back({c, {a, b}});
		}
		sort(edge.begin(), edge.end(), comp);
		int ans = 0;
		for (int i = 0 ; i < edge.size(); i++) {
			tmp = edge[i];
			node1 = tmp.second.first;
			node2 = tmp.second.second;
			if (cari(node1) != cari(node2)) {
				chosen[i] = true;
				ans += tmp.first;
				gabung(node1, node2);
			}
		}
		for (int i = 1; i <= N; i++) 
			parent[i] = i;
		int ans2 = (int)1e9;
		for (int i = 0 ; i < edge.size(); i++) {
			if (!chosen[i]) continue;
			else {
				int tmp2 = 0, cnt = 0;
				for (int j = 1; j <= N; j++) 
					parent[j] = j;
				for (int j = 0; j < edge.size(); j++) {
					tmp = edge[j];
					node1 = tmp.second.first;
					node2 = tmp.second.second;
					if (cari(node1) != cari(node2) && j!=i) {
						tmp2 += tmp.first;
						cnt++;
						gabung(node1, node2);
					}
				}
				if (cnt == N-1) ans2 = min(ans2, tmp2);
			}
		}
		cout << ans << " " << (ans2 == (int)1e9 ? ans : ans2) << '\n';
	}
	return 0;
}