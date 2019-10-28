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

const int MAXN = 1e5;

int n, m;
LL a;
int bike[MAXN+3], money[MAXN+3], maks;

bool can(int x){
	int j = n-1;
	LL now = a;
	for (int i = x-1; i >= 0; --i){
		if (money[j] >= bike[i]){
			--j;
			continue;
		}else {
			int kurang = bike[i] - money[j];
			if (kurang > now) return false;
			now -= kurang;
		}
		--j;
	}
	return true;
}

LL cari(int x){
	int j = n-x;
	LL res = 0;
	for (int i = 0; i < x; ++i){
		res += bike[i];
	}
	return max(0LL, res-a);
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m >> a;
	for (int i = 0; i < n; ++i) cin >> money[i];
	for (int i = 0; i < m; ++i) cin >> bike[i];
	sort(money, money+n);
	sort(bike, bike + m);
	int lo = 0;
	int hi = min(n, m);
	while (lo <= hi){
		int mid = (lo + hi) >> 1;
		if (can(mid)){
			maks = mid;
			lo = mid+1;
		}else {
			hi = mid-1;
		}
	}
	cout << maks << " " << cari(maks) << '\n';
	return 0;
}