#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll n,i,j;
ll A[34];
bool ya[34];

bool cek(ll k){
	ll z;
	if (k==1) return false;
	for (z = 2 ; z <= (ll)sqrt(k) ; z++) {
		if (k%z==0) return false;
	}
	return true;
}

void isi(){
	for (i = 1 ;  i <= 32 ; i++) {
		A[i] = (1<<i)-1;
		if (cek(A[i])) ya[i] = true;
		else ya[i] = false;
	}
}

int main(){
	OPTIMASI
	int t,tc=0;
	cin >> t;
	isi();
	while (t--) {
		ll l,r;
		int ans = 0;
		cin >> l >> r;
		for (i = 1 ; i<= 32 ; i++) {
			if (A[i]>=l && A[i]<=r && ya[i]) ans++;
		}
		cout << "Kasus " << ++tc << ": " << ans << '\n';
	}
}
