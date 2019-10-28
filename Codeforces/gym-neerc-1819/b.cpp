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

const int MAXN = 2e5+5;

int n;
LL h;
vector<pair<LL,LL> > arr;
LL diff[MAXN], ans;

LL query(LL a, LL b){
	if (b < a) return 0;
	else if (a == 0) return diff[b];
	return diff[b]-diff[a-1];
}

bool can(int mulai, int akhir){
	LL eks = query(mulai, akhir-1);
	return (h-eks > 0);
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> h;
	for (int i = 0; i < n; i++){
		LL x, y; cin >> x >> y;
		arr.pb({x, y});
		if (i > 0) {
			diff[i-1] = arr[i].fi - arr[i-1].se;
			if (i-2>=0) diff[i-1] += diff[i-2];
		} 
	}
	ans = -1e18;
	for (int i = 0; i < n; i++){
		LL nowx = arr[i].fi;
		LL nowy = h;
		int lo = i;
		int hi = n-1;
		int ret = i;
		while (lo <= hi){
			int mid = (lo + hi) >> 1;
			if (can(i,mid)){
				ret = mid;
				lo = mid +1;
			}else hi = mid - 1;
		}
		LL dist;
		if (ret == i){
			nowx = arr[i].se;
			dist = nowx+nowy-arr[i].fi;
			ans = max(ans, dist);
		}else {
			LL eks = query(i, ret-1);
			nowy -= eks;
			nowx = arr[ret].se;
			dist = nowx+nowy-arr[i].fi;
			ans = max(ans, dist);
		}
		// cout << dist << " " << i << endl;
	}
	cout << ans << '\n';
	return 0;
}