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

int n, bil, arr[500005];
int frek[1000005];
int k, diff;
int lans, panjang;

int add(int x){
	int ret = diff;
	frek[x]++;
	if (frek[x] == 1) ret++;
	return ret;
}

int dec(int x){
	int ret = diff;
	frek[x]--;
	if (frek[x] == 0) ret--;
	return ret;
}

bool can(int x){
	memset(frek, 0, sizeof frek);
	diff = 0;
	for (int i = 0; i < x; i++){
		diff = add(arr[i]);
	}
	if (diff <= k){
		lans = 0;
		panjang = x;
		return true;
	}
	for (int i = x; i < n; i++){
		diff = add(arr[i]);
		diff = dec(arr[i-x]);
		if (diff <= k){
			lans = i-x+1;
			panjang = x;
			return true;
		}
	}
	return false;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	int lo = 1;
	int hi = n;
	panjang = 1;
	lans = 0;
	while (lo <= hi){
		int mid = (lo + hi) / 2;
		if (can(mid)){
			// cout << mid << '\n';
			lo = mid+1;
		}else hi = mid-1;
	}
	// cout << panjang << '\n';
	cout << lans+1 << " " << lans+panjang << '\n';
	return 0;
}