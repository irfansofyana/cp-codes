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

int q;
int n, k;
LL psum[MAXN];

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> q;
	while (q--) {
		cin >> n >> k;
		for (int i = 0; i <= n; i++){
			psum[i] = 0;
		}
		for (int i = 1; i <= n; i++){
			cin >> psum[i];
			psum[i] += psum[i-1];
		}
		if (k%2 == 0 && psum[n]%2 == 1) cout << "NO\n";
		else if (k%2 == 1 && psum[n]%2 == 0) cout << "NO\n";
		else {
			vector<int> ans;
			int turn = 0;
			for (int i = 1; i <= n && sz(ans) != k-1; i++){
				if (turn % 2 == 0){
					if (psum[i] % 2 == 1){
						ans.pb(i);
						turn = 1-turn;
					}
				}else {
					if (psum[i] % 2 == 0){
						ans.pb(i);
						turn = 1-turn;
					}
				}
			}
			ans.pb(n);
			if (sz(ans) != k) cout << "NO\n";
			else {
				cout << "YES\n";
				for (int i = 0; i < sz(ans); i++){
					cout << ans[i];
					cout << (i == sz(ans)-1 ? '\n' : ' ');
				}
			}
		}
	}
	return 0;
}