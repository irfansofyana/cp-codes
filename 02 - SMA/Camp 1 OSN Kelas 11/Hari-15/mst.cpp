#include <bits/stdc++.h>
using namespace std;

long long n,m,i,j;
long long rank[10005],parent[10005];
vector<pair<long long,pair<long long, long long> > > A;

int cari(long long x){
	if (x!=parent[x]) return cari(parent[x]);
	return x;
}

void gabung(long long a,long long b){
	long long x,y;
	x = cari(parent[a]); y = cari(parent[b]);
	if (x!=y) {
		if (rank[x]>rank[y]) {
			parent[y] = x;
		}
		else {
			parent[x] = y;
			if (rank[x]==rank[y]) rank[y]++;
		}
	}
}

int main(){
	cin.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < m ; i++) {
		long long a,b,c;
		cin >> a >> b >> c;
		A.push_back(make_pair(c,make_pair(a,b)));
	}
	sort(A.begin(),A.end());
	memset(rank,0,sizeof rank);
	for (i = 1 ; i <= n ; i++) parent[i] = i;
	long long ans = 0;
	for (i = 0 ; i < A.size(); i++) {
		if (cari(A[i].second.first)!=cari(A[i].second.second)) {
			gabung(A[i].second.first,A[i].second.second);
			ans += A[i].first;
		}
	}
	cout << ans << endl;
	return 0;
}