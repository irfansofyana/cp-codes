#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j;
ll titik[100005],tower[100005];
ll kiri,kanan,mid,ans;

bool can(ll x){
	ll iti = 0, ito = 0;
	ll bawah,atas;
	while (iti < n && ito < m) {
		while (ito < m && (titik[iti] < tower[ito]-x || titik[iti] > tower[ito] + x)) ito++;
		if (ito == m) return false;
		else iti++;
	}
	if (iti == n) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) cin >> titik[i];
	for (i = 0 ; i < m ; i++) cin >> tower[i];
	kiri = 0; kanan = (ll)2e9;
	while (kiri <= kanan){
		mid = (kiri + kanan)/2;
		if (can(mid)) {
			ans = mid;
			kanan = mid - 1;
		}	
		else kiri = mid + 1;
	}
	cout << ans << '\n';
	return 0;
}
