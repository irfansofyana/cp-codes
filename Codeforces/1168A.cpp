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

const int MAXN = 3e5;

int n, m;
int ans;
int arr[MAXN+3];

bool can(int x){
	int prv = 0;
	for (int i = 1; i <= n; i++){
		int to = (arr[i]+x) % m;
		if (arr[i] == 0){
			if ((prv-arr[i]) > x) return false;
			else continue;
		}else {
			//arr[i] - (m-1)
			//0 - (arr[i]-1)
			if (arr[i] >= prv) {
				if (x >= m - arr[i] + prv) continue;
				else {
					prv = arr[i];
				}
			}else {
				int diff = prv - arr[i];
				if (x < diff) return false;
			}
		}
	}
	return true;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	int lo = 0;
	int hi = m-1;
	while (lo <= hi){
		int mid = (lo + hi) >> 1;
		if (can(mid)){
			ans = mid;
			hi = mid-1;
		}else lo = mid + 1;
	}
	cout << ans << '\n';
	return 0;
}