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

const int MAXN = 3e5;
const LL MOD = 998244353;

int n;
ii arr[MAXN+4];
LL fac[MAXN+3], ans;

void pre(){
	fac[0] = 1LL;
	for (int i = 1; i <= MAXN; ++i){
		fac[i] = (1LL * i * fac[i-1]) % MOD;
	}
}

bool cmp(ii a, ii b){
	if (a.fi == b.fi) return a.se < b.se;
	return a.fi < b.fi;
}

bool cmp1(ii a, ii b){
	if (a.se == b.se) return a.fi < b.fi;
	return a.se < b.se;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	pre();
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> arr[i].fi >> arr[i].se;
	}
	sort(arr, arr + n, cmp);
	LL eks = 0;
	int i = 0;
	LL tmp = 1;
	while (i < n){
		int j = i+1;
		int frek = 1;
		while (j < n && arr[j].fi == arr[j-1].fi){
			++frek;
			++j;
		}
		tmp = (tmp * fac[frek]) % MOD;
		i = j;
	}
	eks = (eks + tmp)%MOD; tmp = 1;
	i = 0;
	int akhir = -1;
	// cout << "1x " << eks << '\n';
	while (i < n){
		int j = i+1;
		int last = arr[i].se;
		int frek = 1;
		if (akhir != -1 && last < akhir) {
			tmp *= 0;
			break;
		}
		while (j < n && arr[j].fi == arr[j-1].fi){
			if (arr[j].se == last){
				++frek;
			}else {
				tmp = (tmp * fac[frek]) % MOD;
				last = arr[j].se;
				frek = 1;
			}
			++j;
		}
		tmp = (tmp * fac[frek]) % MOD;
		akhir = last;
		i = j;
	}
	eks = (eks - tmp + MOD)%MOD; tmp = 1;
	// cout << "2x " << eks << '\n';
	sort(arr, arr + n, cmp1);
	i = 0;
	while (i < n){
		int j = i+1;
		int frek = 1;
		while (j < n && arr[j].se == arr[j-1].se){
			++frek;
			++j;
		}
		tmp = (tmp * fac[frek]) % MOD;
		i = j;
	}
	eks = (eks + tmp) % MOD;
	// cout << "3x " << eks << '\n';
	cout << (fac[n] - eks + MOD)%MOD << '\n';
	return 0;
}