#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,t1,t2;
int tc;
int parent[30005],rank[30005],grup[30005];

int cari(int x){
	if (x!=parent[x]) return cari(parent[x]);
	return x;
}

void gabung(int a,int b){
	int x,y;
	x = cari(parent[a]);
	y = cari(parent[b]);
	if (x!=y) {
		if (rank[x]>rank[y]) {
			parent[y] = x;
			grup[x] += grup[y];
		}
		else {
			parent[x] = y;
			grup[y] += grup[x];
			if (rank[x]==rank[y]) rank[y]++;
		}
	}
}

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n >> m;
		for (i = 1 ; i <= n ; i++) {
			parent[i] = i;
			grup[i] = 1;
		}
		memset(rank,0,sizeof rank);
		for (i = 0 ; i < m ; i++) {
			cin >> t1 >> t2;
			gabung(t1,t2);
		}
		int ans = -1;
		for (i = 1 ; i<= n ; i++) {
			//cout << parent[i] << endl;
			ans = max(ans,grup[i]);
		}
		cout << ans << endl;
	}
	return 0;
}