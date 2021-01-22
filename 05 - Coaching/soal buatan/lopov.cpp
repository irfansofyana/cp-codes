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

const int MAXN = 300000;
int N, K;
LL ans;
multiset<LL> bag;
ii arr[MAXN+5]; 

bool cmp(ii a, ii b){
	return a.se > b.se;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	cin >> N >> K;
	for (int i = 0; i < N; i++){
		int w, v;
		cin >> w >> v;
		arr[i] = {w, v};
	}
	for (int i = 0; i < K; i++){
		int b;
		cin >> b;
		bag.insert(b);
	}
	sort(arr, arr + N, cmp);
	ans = 0LL;
	for (int i = 0; i < N && !bag.empty(); i++){
		int berat = arr[i].fi;
		int val = arr[i].se;
		auto lo = bag.lower_bound(berat);
		if (lo == bag.end()) continue;
		else {
			ans += val;
			bag.erase(lo);
		}
	}
	cout << ans << '\n';
	return 0;
}