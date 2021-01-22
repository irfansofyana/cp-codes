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

const int MAXN = 2e5 + 5;
int N, M, K;
LL ta, tb;
LL arr[MAXN], brr[MAXN];
vector<pair<LL, LL> > ret;

bool cmp(pair<LL,LL> a, pair<LL,LL> b){
	return a.se < b.se;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	cin >> N >> M >> ta >> tb >> K;
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 0; i < M; i++) cin >> brr[i];
	for (int i = 0; i < N; i++){
		LL tmp = arr[i];
		int idx = lower_bound(brr, brr + M, tmp + ta) - brr;
		if (idx >= 0 && idx < M)
			ret.pb({tmp, idx});
	}
	sort(ret.begin(), ret.end(), cmp);
	// cout << "xxx\n";
	// for (auto a : ret){
	// 	cout << a.fi << " " << a.se << '\n';
	// }
	// cout << "xxx\n";
	int i = 0;
	LL ans = -1;
	while (i < sz(ret) && K > 0){
		int j = i + 1;
		int cnt = 1;
		while (j < sz(ret) && ret[j].se == ret[i].se){
			cnt++;
			j++;
		}
		// cout << i << " " << cnt << '\n';
		if (j < sz(ret)) {
			if (ret[j].se == ret[i].se + 1){
				K--;
				ans = max(ans, brr[ret[j].se]);
			}else {
				if (K >= cnt) {
					K -= cnt;
					ans = max(ans, brr[ret[j].se]);
				}else {
					K = 0;
					ans = max(ans, brr[ret[i].se]);
					if (ret[i].se != M-1)
						ans = max(ans, brr[ret[i].se + 1]);
				}
			}
		}else {
			if (K > 0){
				K--;
				if (ret[i].se == M-1) ans = LONG_MAX;
				else ans = brr[ret[i].se + 1];
			}
		}
		i = j;
	}
	if (K > 0) ans = LONG_MAX;
	cout << (ans == LONG_MAX ? -1 : ans + tb) << '\n';
	return 0;
}

// 4 6 8
// 1 2 3  
// 2 2 1
// 4 9 3
// 6 9 3
// 8 9 3
