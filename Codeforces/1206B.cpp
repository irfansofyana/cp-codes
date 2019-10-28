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

vector<LL> pos, neg;
int n, nol;
LL ans;

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	for (int i = 0; i < n; ++i){
		int v; cin >> v;
		if (v == 0) {
			++nol;
		}else if (v < 0){
			neg.pb(v);
		}else if (v > 0){
			pos.pb(v);
		}
	}
	sort(neg.begin(), neg.end());
	sort(pos.begin(), pos.end());
	if (sz(neg) % 2 == 0 || (sz(neg)%2 == 1 && nol > 0)){
		ans += nol;
		for (int i = 0; i < sz(neg); ++i){
			ans += -1 - neg[i];
		}
		for (int i = 0; i < sz(pos); ++i){
			ans += pos[i] - 1;
		}
	}else {
		if (sz(pos) == 0){
			for (int i = 0; i < sz(neg)-1; ++i){
				ans += -1 - neg[i];
			}
			ans += 1 - neg[sz(neg)-1];
		}else {
			LL t1 = 1-neg[sz(neg)-1];
			LL t2 = pos[0]+1;
			if (t1 < t2) {
				for (int i = 0; i < sz(neg)-1; ++i)
					ans += -1-neg[i];
				ans += t1;
				for (int i = 0; i < sz(pos); ++i) ans += pos[i]-1;
			}else {
				for (int i = 0; i < sz(neg); ++i)
					ans += -1-neg[i];
				ans += t2;
				for (int i = 1; i < sz(pos); ++i)
					ans += pos[i] - 1;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}