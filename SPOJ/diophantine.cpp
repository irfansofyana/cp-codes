#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,t;
ll temp,x,ans,jaw;
map<ll,ll> jumlah_gede;
vector<ll> gede;

void isi(){
	for (i = 0 ; i <= 1000; i++) {
		for (j = 0 ; j <= 1000; j++) {
			x = i*i*i+j*j*j*j; 
			if (x<=1000000000){
				if (jumlah_gede[x]==0) gede.push_back(x);
				jumlah_gede[x]++;
			}
		}
	}
	sort(gede.begin(),gede.end());
}

ll binser(ll awal,ll akhir) {
	ll tengah = (awal+akhir)/2;
	if (awal>akhir) return jaw;
	else if (tengah*tengah<=x) {
		jaw = max(jaw,tengah);
		return binser(tengah+1,akhir);
	}
	else if (tengah*tengah>x) {
		return binser(awal,tengah-1);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> t;
	while (t--) {
		cin >> n;
		ans = 0;
		for (i = 0 ; i < gede.size(); i++) {
			if (gede[i]>n) break;
			else {
				jaw = 0;
				x = n-gede[i];
				ans += jumlah_gede[gede[i]]*(binser(0,1000000000)+1);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}