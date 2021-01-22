#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()
using namespace std;

const int N = (int)1e5;
typedef long long ll;

ll n,i,j;
ll pos[N + 5], arr[N + 5], tree[2*N + 10], lazy[N + 5];
int t;

void build(int node,int kiri,int kanan){
	if (kiri == kanan) {
		tree[node] = pos[kiri];
	}
	else {
		build(node * 2, kiri, (kiri + kanan)/2);
		build(node * 2 + 1, 1 + (kiri + kanan)/2 , kanan);
		tree[node] = tree[node * 2] + tree[node * 2 + 1];
	}
}

void update(int node,int kiri,int kanan,int i,int j,int val){
//	if (kiri > kanan) return;
	if (lazy[node] != 0) {
		tree[node] += lazy[node];
		if (kiri!=kanan) {
			lazy[node * 2] += lazy[node];
			lazy[node * 2 + 1] += lazy[node];
		}
		lazy[node] = 0;
	}
	if (kiri > kanan || kanan < i || kiri > j) return;
	if (kiri >= i && kanan <= j) {
		tree[node] += val;
		if (kiri!=kanan){
			lazy[node * 2] += val;
			lazy[node * 2 + 1] += val;
		}
		return;
	}
	update(node * 2, kiri, (kiri + kanan)/2, i , j, val);
	update(node * 2 + 1, 1 + (kiri + kanan)/2, kanan, i, j, val);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

ll query(int node,int kiri,int kanan,int i, int j){
	if (kiri > kanan || kanan < i || kiri > j) return 0;
	if (lazy[node] != 0) {
		tree[node] += lazy[node];
		if (kiri!=kanan){
			tree[node * 2] += lazy[node];
			tree[node * 2 + 1] += lazy[node];
		}
		lazy[node] = 0;
	}	
	if (kiri >= i && kanan <= j) return tree[node];
	ll q1 = query(node * 2, kiri, (kiri + kanan)/2, i, j);
	ll q2 = query(node * 2 + 1, 1 + (kiri+kanan)/2, kanan, i, j);
	return q1 + q2;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 1 ; i <= n ; i++){
			cin >> arr[i];
			pos[i] = i;
		}
		build(1,1,n);
		memset(lazy, 0 , sizeof lazy);
		ll ans = 0;
		bool can = true;
		for (i = 1 ; i <= n ; i++) {
			long long cc = (long long)(abs(query(1,1,n,arr[i],arr[i])-i));
			ans += cc;
			cout << "posisi " << query(1,1,n,arr[i],arr[i]) << " tambah " << cc << '\n';
			if (cc > 2) {
				can = false;
				break;
			}
			//cout << query(1,1,n,arr[i],arr[i]) << '\n';
			if (cc == 0) continue;
			else if (query(1,1,n,arr[i],arr[i]) > i) {
				cout << i << " " << query(1,1,n,arr[i],arr[i])-1 << '\n';
				update(1 ,1 ,n ,i ,query(1,1,n,arr[i],arr[i])-1 , 1);
			}
			else {
				update(1,1,n,query(1,1,n,arr[i],arr[i])+1,i,-1);
			}
		}
		if (can) cout << ans << '\n';
		else cout << "Too chaotic\n";
	}
	return 0;
}
