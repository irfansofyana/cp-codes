#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll t,l,r,i,j,ans1,ans2;
vector<ll> A;
bool bil[1000005];

void sieve(){
	memset(bil,true,sizeof bil);
	for (ll x = 2 ; x<=1000000 ; x++) {
		if (bil[x]) {
			A.push_back(x);
			ll y = x;
			while (y*x<=1000000) {
				bil[y*x] = false;
				y++;
			}
		}
	}
}

ll bawah(ll ki,ll ka,ll bil){
	ll tengah = (ka+ki)/2;
	if (ki>ka) return ans1;
	else if (A[tengah]>=bil) {
		ans1 = min(ans1,tengah);
		return bawah(ki,tengah-1,bil);
	}
	else if (A[tengah]<bil) return bawah(tengah+1,ka,bil);
}

ll atas(ll ki,ll ka,ll bil){
	ll tengah = (ki+ka)/2;
	if (ki>ka) return ans2;
	else if (A[tengah]>bil) {
		return atas(ki,tengah-1,bil);
	}
	else if (A[tengah]<=bil) {
		ans2 = max(ans2,tengah);
		return atas(tengah+1,ka,bil);
	}
}

int main(){
	OPTIMASI
	sieve();
	cin >> t;
	//for (i = 0 ; i < 10; i++)
		//cout << A[i] << '\n';
	while (t--) {
		cin >> l >> r;
		ans1 = 10000000;
		ans2 = -1000000;
		if (l==r && l==1) cout << 0 << '\n';
		else cout << atas(0,A.size()-1,r)-bawah(0,A.size()-1,l)+1 << '\n';
	}
	return 0;
}