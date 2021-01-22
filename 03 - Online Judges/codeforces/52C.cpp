
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
 
const int MAXN = 200005;
 
int n;
LL tree[4*MAXN], lazy[4*MAXN];
LL arr[MAXN];
 
int left(int x){
	return x << 1;
}
 
int right(int x){
	return (x << 1) + 1;
}
 
void build(int no, int l, int r){
	if (l == r){
		tree[no] = arr[l];
	}else {
		int mid = (l + r) >> 1;
		int ll = left(no);
		int rr = right(no);
		build(ll, l, mid);
		build(rr, mid+1, r);
		tree[no] = min(tree[ll], tree[rr]);
	}
}
 
 
void propagate(int no, int l, int r){
	tree[no] += lazy[no];
	if (l != r){
		lazy[left(no)] += lazy[no];
		lazy[right(no)] += lazy[no];
	}
	lazy[no] = 0;
}
 
LL query(int no, int l, int r, int a, int b){
	if (lazy[no] != 0) propagate(no, l, r);
 
	if (a <= l && r <= b) return tree[no];
	else if (l > r || l > b ||r < a) return 1e18;
	else {
		int mid = (l + r) >> 1;
		LL al = query(left(no), l, mid, a, b);
		LL ar = query(right(no), mid+1, r, a, b);
		return min(al, ar);
	}
}	
 
 
void update(int no, int l, int r, int a, int b, int val){
	if (lazy[no] != 0) propagate(no, l, r);
	if (l > r || l > b || r < a) return;
	if (a <= l && r <= b){
		tree[no] += val;
		if (l != r){
			lazy[left(no)] += val;
			lazy[right(no)] += val;
		}
		return;
	}
	int mid = (l + r) >> 1;
	update(left(no), l, mid, a, b, val);
	update(right(no), mid+1, r, a, b, val);
	tree[no] = min(tree[left(no)], tree[right(no)]);
} 
 
 
 
int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	build(1, 1, n);
	int m; cin >> m;
	cin.ignore();
	while (m--){
		string s; getline(cin, s);
		istringstream is{s};
		int from, to, val;
		is >> from >> to;
		from++; to++;
		if (is >> val){
			if (from <= to){
				update(1, 1, n, from, to, val);
			}else {
				update(1, 1, n, from, n, val);
				update(1, 1, n, 1, to, val);
			}
		}else {
			LL ans;
			if (from <= to) {
				ans = query(1, 1, n, from, to);
			}else {
				ans = query(1, 1, n, from, n);
				ans = min(ans, query(1, 1, n, 1, to));
			}
			cout << ans << '\n';
		}
	}
	return 0;
}