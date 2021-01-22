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

const int MAXN = 1e6+3;

int n, m;
vector<int> bil[MAXN];
vector<ii> arr[MAXN];

void ubah(){
	for (int i = 1; i < MAXN; i++){
		int siz = sz(bil[i]);
		if (siz > 0){
			int j = 0;
			while (j < siz){
				int k = j+1;
				while (k < siz && bil[i][k] == bil[i][k-1]+1){
					k++;
				}
				arr[i].pb({bil[i][j],bil[i][k-1]});
				j = k;
			}
		}
	}
}

int cari(int bil, int x ){
	int lo = 0;
	int hi = sz(arr[bil]) - 1;
	while (lo <= hi) {
		int mid = (lo + hi) >> 1;
		if (arr[bil][mid].fi <= x && x <= arr[bil][mid].se){
			return mid;
		}else if (arr[bil][mid].se < x){
			lo = mid + 1;
		}else if (arr[bil][mid].fi > x){
			hi = mid - 1;
		}
	}
	return -1;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE

	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		int x; cin >> x;
		bil[x].pb(i);
	}
	ubah();
	for (int i = 0; i < m; i++){
		int l, r, x; cin >> l >> r >> x;
		if (sz(arr[x]) == 0) {
			cout << l << '\n';
		}else {
			int pl = cari(x,l);
			int pr = cari(x,r);
			if (pl == -1) cout << l << '\n';
			else if (pr == -1) cout << r << '\n';
			else if (pl == pr) cout << -1 << '\n';		
			else cout << arr[x][pl].se+1 << '\n';
		}
	}
	return 0;
}