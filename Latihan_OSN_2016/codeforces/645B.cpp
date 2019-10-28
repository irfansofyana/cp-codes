#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,k,i,j;
ll arr[100005];
ll tree[100005];
ll tmp;

ll query(ll idx){
	ll ret = 0;
	while (idx > 0) {
		ret += tree[idx];
		idx -= (idx & -idx);
	}
	return ret;
}

void update(ll idx,ll tot) {
	while (idx <= 100000) {
		tree[idx] += tot;
		idx += (idx & -idx);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 1 ; i <= n ; i++) 
		arr[i] = i;
	for (i = 1 ; i <= (n/2) && k > 0 ; i++){
		swap(arr[i],arr[n-i+1]);
		k--;
	}
	ll ans = 0;
	for (i = n ; i >= 1 ; i--) {
		tmp = arr[i];
		ans += query(tmp-1);
		update(tmp,1);
	}
	cout << ans << '\n';
	return 0;
}