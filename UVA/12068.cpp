#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

long long n,m,i,p,q;
long long tc,sum,t;
vector<long long> v;

long long fpb(long long p,long long q){
	if (q==0) return p;
	return fpb(q,p%q);
}

void cari_jumlah(long long idx,long long udah,long long jumlah) {
	long long z;
	if (udah==(long long)v.size()-1) sum += jumlah;
	for (z = idx ; z < (long long)v.size(); z++) {
		cari_jumlah(z+1,udah+1,jumlah*v[z]);
	}
}

int main(){
	OPTIMASI
	cin >> tc;
	while (tc--) {
		cin >> n; v.clear(); sum = 0;
		for (i = 0 ; i < n ; i++) {
			long long x;
			cin >> x;
			v.push_back(x);
		}
		cari_jumlah(0,0,1);
		p = n; 
		for (i = 0 ; i < v.size(); i++) 
			p*=v[i];
		q = fpb(p,sum); 
		p/=q; sum/=q;
		cout << "Case " << ++t << ": " << p << '/' << sum << '\n';
	}
	return 0;
}