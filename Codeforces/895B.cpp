#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

ll n, x, k;
ll arr[100005];

ll cari(ll bil){
	ll cari = k + bil/x;
	if (bil%x == 0 && cari > 0) cari--;
	ll bawah = x*cari;
	ll atas = x*(cari + 1) - 1;
	bawah = max(bawah, bil);
	ll p = lower_bound(arr, arr+n, bawah) - arr;
	ll q = upper_bound(arr, arr+n, atas) - arr;
	q--;
	return (q >= p ? q-p+1 : 0); 
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> x >> k;
	for (int i = 0 ; i < n ; i++) cin >> arr[i];
	sort(arr, arr+n);
	ll ans = 0;
	for (int i = 0 ; i < n ; i++) {
		//cout << cari(arr[i]) << '\n';
		ans += cari(arr[i]);
	}
	cout << ans << '\n';
	return 0;	
}