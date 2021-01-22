#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int parent[100005],rank[100005],ukuran[100005];
map<string,int> mep;
string s,a,b;

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
			ukuran[x] += ukuran[y];
		}
		else {
			parent[x] = y;
			ukuran[y] += ukuran[x];
			if (rank[x]==rank[y]) rank[y]++;
		}
	}
}

int main(){
	cin.tie(0);
	while (cin >> n >> m && (n>=1 && m>=0)) {
		mep.clear();
		for (i = 1 ; i<= n ; i++){
			cin >> s;
			mep[s] = i;
		}
		for (i = 1 ; i<= n ; i++) {
			parent[i] = i;
			ukuran[i] = 1;
		}
		memset(rank,0,sizeof rank);
		for (i = 1 ; i<= m ; i++) {
			cin >> a >> b;
			gabung(mep[a],mep[b]);
		}
		int ans = -1;
		for (i = 1 ; i<= n ; i++) {
			ans = max(ans,ukuran[i]);
		}
		cout << ans << endl;
	}
	return 0;
}