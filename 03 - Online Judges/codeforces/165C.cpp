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

const int MAXN = 1e6;

int k;
string s;
map<int,int> mep;
LL prefix[MAXN+5], ans;

int findLower(int lo,int hi, LL kurang){
	int ret = hi;
	while (lo <= hi){
		int mid = (lo + hi) >> 1;
		if (prefix[mid]-kurang < k){
			lo = mid+1;
		}else if (prefix[mid]-kurang >= k){
			ret = min(ret, mid);
			hi = mid-1;
		}
	}
	if (prefix[ret]-kurang > k) return -1;
	return ret;
}

int findUpper(int lo, int hi, LL kurang){
	int ret = lo;
	while (lo <= hi){
		int mid = (lo + hi) >> 1;
		if (prefix[mid]-kurang > k){
			hi = mid-1;
		}else if (prefix[mid]-kurang <= k){
			ret = max(ret, mid);
			lo = mid+1;
		}
	}
	if (prefix[ret]-kurang < k) return -1;
	return ret;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> k >> s;
	for (int i = 0; i < sz(s); i++){
		if (i == 0){
			prefix[i] = (s[i] == '1');
		}else {
			prefix[i] = prefix[i-1] + (s[i] == '1');
		}
	} 
	ans = 0LL;
	for (int i = 0; i < sz(s); i++){
		LL kurang = (i == 0 ? 0 : prefix[i-1]);
		int lo = i;
		int hi = sz(s)-1;
		int lower = findLower(lo, hi, kurang);
		int upper = findUpper(lo, hi, kurang);
		if (lower==-1 || upper==-1) continue;
		ans += max(upper-lower+1, 0);
	}
	cout << ans << '\n';
	return 0;
}