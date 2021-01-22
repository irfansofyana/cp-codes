#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;
const ll MOD = (ll)1e9 + 7;

ll n,m,i,j;
ll arr[300005];
ll ans;
ll nilai[300005];

void isi(){
	nilai[0] = 0;
	j = 1;
	for (i = 1 ; i <= 300005; i++) {
		nilai[i] = nilai[i-1] + j;
		nilai[i] %= MOD;
		j *= 2; j%= MOD;
	}
}

ll cari(ll n,ll m){
	if (n >= 0) return (n%m);
	else {
		ll bantuan = -1*n;
		bantuan /= m;
		ll hasil = m*(bantuan + 1);
		hasil += n;
		return hasil%m;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr, arr + n);
	ans = 0;
	for (i = 0 ; i < n ; i++) {
		ll tmp = cari(nilai[n-(i+1)]-nilai[i], MOD);
		//cout << nilai[n-(i+1)] << " " << nilai[i] << '\n';
	//	cout << cari(-arr[i]*tmp, MOD) << '\n';
		ans += cari(-arr[i]*tmp, MOD);
		ans %= MOD;
	}	
	cout << ans << '\n';
	return 0;
}