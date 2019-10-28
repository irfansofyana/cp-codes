/*
                                               
 ____                 ______           _____   
|    |            ___|\     \      ___|\    \  
|    |           |    |\     \    |    |\    \ 
|    |           |    |/____/|    |    | |    |
|    |        ___|    \|   | |    |    |/____/|
|    |       |    \    \___|/     |    ||    ||
|    |       |    |\     \        |    ||____|/
|____|  ___  |\ ___\|_____|  ___  |____|       
|    | |   | | |    |     | |   | |    |       
|____| |___|  \|____|_____| |___| |____|       
  \(             \(    )/           \(         
   '              '    '             '      
   				template v.1.4   
                                           
*/
#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(x) cerr << "#" << x << ": " << x << '\n';
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = b; i >= a; i--)
#define FORL(i, a, b) for (LL i = a; i <= b; i++)
#define FORDL(i, a, b) for (LL i = b; i >= a; i--)

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

const LL MODPRIME = 1e9 + 7;
const double EPS  = 1e-12;
const LL MAXL = 4e18;
const LL MINL = -4e18;
const int MAXI = 2e9;
const int MINI = -2e9;

const int MAXN = 2e5+3;

int N, Q;
int tree[4*MAXN], lazy[MAXN];

int le(int p){
	return p << 1;
}

int ri(int p){
	return (p << 1) + 1;
}

void build(int idx, int l, int r){
	if (l == r){
		tree[idx] = l;
	}else {
		int mid = (l + r) >> 1;
		build(le(idx), l, mid);
		build(ri(idx), mid+1, r);
		tree[idx] = min(tree[le(idx)], tree[ri(idx)]);
	}
}

void propagate(int idx, int l, int r){
	tree[idx] = min(tree[idx], lazy[idx]);
	int mid = (l + r) >> 1;
	if (l != r){
		int kiri, kanan;
		kiri = le(idx);
		kanan = ri(idx);
		lazy[kiri] = (lazy[kiri] == -1 ? lazy[idx] : min(lazy[kiri], lazy[idx]));
		lazy[kanan] = (lazy[kanan] == -1 ? lazy[idx] : min(lazy[kanan], lazy[idx]));
	}
	lazy[idx] = -1;
}
 
int query(int idx, int a, int b, int l, int r){
	if (lazy[idx] != -1) propagate(idx, a, b);
	if (a > r || b < l) return -1;
	if (l <= a && b <= r) return tree[idx];
	int mid = (a + b) >> 1;
	int kiri = query(le(idx), a, mid, l, r);
	int kanan = query(ri(idx), mid+1, b, l, r);
	if (kiri == -1) return kanan;
	else if (kanan == -1) return kiri;
	else return min(kanan, kiri);
}

void update(int idx, int a, int b, int l, int r, int val){
	if (lazy[idx] != -1) propagate(idx, a, b);
	if (a > r || b < l) return;
	if (l <= a && b <= r) {
		tree[idx] = min(tree[idx], val);
		lazy[le(idx)] = val;
		lazy[ri(idx)] = val;
		return;
	}
	int mid = (a + b) >> 1;
	update(le(idx), a, mid, l, r, val);
	update(ri(idx), mid+1, b, l, r, val);
	tree[idx] = min(tree[le(idx)], tree[ri(idx)]);
}	


int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	cin >> N >> Q;

	build(1, 1, N);
	memset(lazy, -1, sizeof lazy);

	FOR(i, 1, Q){
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1){
			int q1 = query(1, 1, N, b, b);
			int q2 = query(1, 1, N, c, c);
			if (min(q1, q2) == q1) update(1, 1, N, c, c, q1);
			else update(1, 1, N, b, b, q2);
		}else if (a == 2){
			int q = query(1, 1, N, b, c);
			update(1, 1, N, b, c, q);
		}else {
			int q1 = query(1, 1, N, b, b);
			int q2 = query(1, 1, N, c, c);
			cout << q1 << " " << q2 << '\n';
			if (q1 == q2) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}