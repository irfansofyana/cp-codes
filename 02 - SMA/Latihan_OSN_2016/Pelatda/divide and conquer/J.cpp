#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j;
ll t,maks;
ll arr[200005];
ll sum[10000005];

ll cari(ll k){
	ll ret = 0;
	while (k > 0){
		ret += sum[k];
		k -= (k & -k);
	}
	return ret;
}

void update(ll k,ll nilai){
	while (k <= maks){
		sum[k] += nilai;
		k += (k & -k);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		maks = -1;
		memset(sum,0,sizeof sum);
		for (i = 0 ; i < n ; i++){
			cin >> arr[i];
			maks = max(arr[i],maks);
		}
		ll ans = 0;
		for (i = n-1 ; i >= 0 ; i--) {
			ans += cari(arr[i]-1);
			update(arr[i],1);
		}
		cout << ans << '\n';
	}
	return 0;
}