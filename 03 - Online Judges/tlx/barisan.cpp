#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

ll n,i,j;
ll pos[1000005];
ll tree[4000020];

void build(ll node,ll kiri,ll kanan){
	if (kiri == kanan) {
		tree[node] = pos[kiri];
	}
	else {
		ll mid = (kiri + kanan) >> 1;
		build((node << 1), kiri, mid);
		build((node << 1) + 1, mid + 1, kanan);
		tree[node] = max(tree[node << 1], tree[(node << 1) + 1]);
	}
}

ll query(ll node,ll kiri,ll kanan,ll i,ll j){
	if (kanan < i || kiri > j ) return -1;
	if (i <= kiri && kanan <= j) return tree[node];

	ll mid = (kiri + kanan) >> 1;

	ll x1 = query((node << 1), kiri, mid, i, j);
	ll x2 = query((node << 1) + 1, mid + 1, kanan, i, j);
	if (x1 == -1) return x2;
	if (x2 == -1) return x1;
	return max(x1,x2);
}

void update(ll node,ll kiri,ll kanan,ll idx,ll nilai){
	if (kiri == kanan) {
		pos[idx] = max(nilai,pos[idx]);
		tree[node] = max(tree[node], pos[idx]);
	}
	else {
		ll mid = (kiri + kanan) >> 1;
		if (kiri <= idx && idx <= mid) update((node << 1), kiri, mid, idx,nilai);
		else update((node << 1) + 1, mid + 1, kanan, idx, nilai);
		tree[node] = max(tree[(node << 1)], tree[(node << 1) + 1]);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	build(1,1,1000000);
	ll ans = 0;
	for (i = 1 ; i <= n ; i++) {
		cin >> j;
		ll tmp = query(1,1,1000000,j+1,1000000);
		//cout << tmp << '\n';
		ans += (i - tmp);
		update(1,1,1000000,j,i);
	}
	cout << ans << '\n';
	return 0;
}