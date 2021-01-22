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

int n;
LL k, arr[MAXN+5];

bool can(LL x){
	LL sum = 0LL;
	for (int i = n/2; i < n; i++){
		if (arr[i] < x) sum += 1LL*(x-arr[i]);
	}
	return (sum <= k);
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	LL lo = arr[n/2];
	LL hi = 2e9;
	LL ans = lo;
	while (lo <= hi){
		int mid = (lo + hi) >> 1;
		if (can(mid)){
			ans = mid;
			lo = mid+1;
		}else {
			hi = mid-1;
		}
	}
	cout << ans << '\n';
	return 0;
}