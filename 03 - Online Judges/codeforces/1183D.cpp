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

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	int q; cin >> q;
	while (q--) {
		int n; cin >> n;
		map<int,int> mep;
		for (int i = 0; i < n; i++){
			int x; cin >> x;
			mep[x]++;	
		}
		priority_queue<int> pq;
		for (map<int,int>::iterator it = mep.begin(); it!=mep.end(); ++it){
			pq.push(it->se);
		}
		int ans = 0;
		int last = -1e9;
		while (!pq.empty() && last != 1){
			int top = pq.top(); pq.pop();
			if (last == -1e9) {
				ans += top;
				last = top;
			}else {
				ans += min(last-1, top);
				last = min(last-1, top);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
