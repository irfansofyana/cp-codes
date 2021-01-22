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

int t;
LL n;


LL nc2(int x){
	return (1LL * x * (x-1)) / 2;
}


LL cari(LL x){
	LL lo = 1;
	LL hi = 1e5-2;
	LL ret = 1;
	while (lo <= hi){
		LL mid = (lo + hi) >> 1;
		if (nc2(mid)<= 1LL * x){
			ret = mid;
			lo = mid+1;
		}else hi = mid - 1;
	}
	return ret;
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> t;
	while (t--){
		cin >> n;
		int b1 = cari(n);
		cout << 1;
		for (int i = 0; i < b1-2; i++){
			cout << 3;
		}
		for (int i = 0; i < n - nc2(b1); i++){
			cout << 1;
		}
		cout << 337 << '\n';
	}
	return 0;
}