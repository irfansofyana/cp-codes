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

const int MAXN = 1000;

int n, m;

struct paket{
	int tipe;
	int l, r;
};

vector<ii> inc;
paket arr[MAXN+3];
int ans[MAXN+3];

bool cmp(paket a, paket b){
	if (a.tipe == b.tipe){
		if (a.l == b.l)
			return a.r > b.r;
		return a.l < b.l;
	}
	return a.tipe > b.tipe;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m;
	for (int i =0; i < m; i++){
		int t, l, r;
		cin >> t >> l >> r;
		arr[i].l = l;
		arr[i].r = r;
		arr[i].tipe = t;
	}
	sort(arr, arr + m, cmp);
	int lo = 0;
	int hi = 0;
	for (int i = 0; i < m; i++){
		if (arr[i].tipe == 1) {
			if (i == 0) {
				lo = arr[i].l; 
				hi = arr[i].r;
			}else {
				if (arr[i].l > hi){
					inc.pb({lo, hi});
					lo = arr[i].l; 
					hi = arr[i].r;
				}else {
					hi = max(hi, arr[i].r);
				}
			}
		}else {
			if (i-1 >= 0 && arr[i-1].tipe == 1){
				inc.pb({lo, hi});
			}
			for (int j = 0; j < sz(inc); j++){
				if (inc[j].fi <= arr[i].l && arr[i].r <= inc[j].se){
					cout << "NO\n";
					return 0;
				}
			}
		}
	}
	if (arr[m-1].tipe == 1){
		inc.pb({lo, hi});
	}
	// for (auto a : inc){
	// 	cout << a.fi << " " << a.se << '\n';
	// }
	// cout << endl;
	int dumm = 1;
	memset(ans, -1, sizeof ans);
	for (int i = 0; i < sz(inc); i++){
		for (int j = inc[i].fi; j <= inc[i].se; j++){
			ans[j] = dumm;
		}
		dumm++;
	}
	int cnt = 0;
	int i = 1;
	while (i <= n){
		if (ans[i] > 0){
			cnt++;
			int j = i+1;
			while (j <= n && ans[j] == ans[i]) j++;
			i = j;
		}else {
			cnt++;
			i++;
		}
	}
	i = 1;
	while (i <= n){
		if (ans[i]> 0){
			int j = i;
			int pat = ans[i];
			while (j <= n && ans[j] == pat){
				ans[j] = cnt;
				j++;
			}
			i = j;
			cnt--;
		}else {
			ans[i] = cnt;
			cnt--;
			i++;
		}
	}
	cout << "YES\n";
	for (int i = 1; i <= n; i++){
		cout << ans[i] << " ";
	}cout << '\n';
	return 0;
}