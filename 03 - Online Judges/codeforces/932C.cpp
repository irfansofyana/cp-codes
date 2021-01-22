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

int n, a, b, aa, bb;
bool ada;
int ans[MAXN+3];

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> a >> b;
	ada = false;
	for (int i = 0; a * i <= n && !ada; ++i){
		int sisa = n - a*i;
		if (sisa % b == 0){
			aa = i; bb = sisa / b;
			ada = true;
		}
	}
	if (!ada) cout << -1 << '\n';
	else {
		int cur = 1;
		int ending = -1;
		int idx = 0;
		for (int i = 0; i < aa; ++i){
			ending = cur;
			++cur;
			for (int j = 0; j < a-1; ++j){
				ans[idx++] = cur;
				++cur;
			}
			ans[idx++] = ending;
		}
		for (int i = 0; i < bb; ++i){
			ending = cur;
			++cur;
			for (int j = 0; j < b-1; ++j){
				ans[idx++] = cur;
				++cur;
			}
			ans[idx++] = ending;
		}
		for (int i = 0; i < n; ++i){
			cout << ans[i] << " ";
		}cout << '\n';
	}
	return 0;
}