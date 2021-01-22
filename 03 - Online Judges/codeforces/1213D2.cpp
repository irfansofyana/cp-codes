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

const int MAXN = 2e5;

int n, k;
int arr[MAXN+3];
priority_queue<int,vector<int>, greater<int> > pq[MAXN+3];
int ans;

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> k;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	for (int i = 0; i < n; ++i){
		int bil = arr[i];
		int step = 0;
		while (bil != 0){
			pq[bil].push(step);
			bil /= 2;
			++step;
		}
	}
	ans = 2e9;
	for (int i = 1; i <= MAXN; ++i){
		if (pq[i].size() < k) continue;
		else {
			int bil = 0;
			for (int j = 0; j < k; ++j){
				bil += pq[i].top();
				pq[i].pop();
			}
			ans = min(ans, bil);
		}
	}
	cout << ans << '\n';
	return 0;
}