#include <bits/stdc++.h>
using namespace std;

long long tc,n,i,j;
long long m,ans;
long long harga,rrank[1010],parent[1010];
vector<pair<long long,pair<long long,long long> > > A;

long long cari(long long x){
	if (x!=parent[x]) return cari(parent[x]);
	return x;
}

void gabung(long long a,long long b){
	long long x,y;
	x = cari(parent[a]);
	y = cari(parent[b]);
	if (x!=y) {
		if (rrank[x]>rrank[y]) {
			parent[y] = x;
		}
		else {
			parent[x] = y;
			if (rrank[x]==rrank[y]) rrank[y]++;
		}
	}
}

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> harga >> n >> m;
		for (i = 1 ; i<=n ; i++) parent[i] = i;
		memset(rrank,0,sizeof rrank);
		for (i = 0 ; i < m ; i++) {
			long long a,b,c;
			cin >> a >> b >> c;
			A.push_back(make_pair(c,make_pair(a,b)));
		}
		sort(A.begin(),A.end()); ans = 0;
		for (i = 0; i < A.size() ; i++) {
			if (cari(A[i].second.first)!=cari(A[i].second.second)) {
				gabung(A[i].second.first,A[i].second.second);
				ans += A[i].first;
			}
		}
		cout << ans*harga << endl;
	}
	return 0;
}