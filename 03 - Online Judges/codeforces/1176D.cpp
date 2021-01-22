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
const int MAXP = 1e7;

int n, arr[2*MAXN+3];
bitset<MAXP+2> bs;
int cnt[MAXP+2];
int mini[MAXP+2];
int order[MAXP+2];

void sieve(){
	bs.set();
	memset(mini, -1, sizeof mini);
	bs[0] = bs[1] = false;
	int count = 1;
	for (int i = 2; i <= MAXP; ++i){
		if (bs[i]){
			order[i] = count;
			++count;
			mini[i] = i; 
			for (LL j = 1LL * i * i; j <= MAXP; j += i){
				bs[j] = false;
				mini[j] = (mini[j] == -1 ? i : min(mini[j], i));
			}
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	sieve();
	cin >> n;
	for (int i = 0; i < 2 * n; ++i) {
		cin >> arr[i];
		++cnt[arr[i]];
	}
	sort(arr, arr + 2 * n);
	vector<int> ans;
	for (int i = 2 * n-1; i >= 0; --i){
		if (!bs[arr[i]] && cnt[arr[i]] > 0){
			//komposit
			int fac = arr[i] / mini[arr[i]];
			ans.pb(arr[i]);
			--cnt[fac];
			--cnt[arr[i]];
		}
	}
	for (int i = 2 * n - 1; i >= 0; --i){
		if (cnt[arr[i]] > 0 && bs[arr[i]]){
			ans.pb(order[arr[i]]);
			--cnt[order[arr[i]]];
			--cnt[arr[i]];
		}
	}
	for (int i = 0; i < sz(ans); ++i){
		cout << ans[i] << (i == sz(ans)-1 ? '\n' : ' ');
	}
	return 0;
}