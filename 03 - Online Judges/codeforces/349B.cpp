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

int v;
int arr[10], mini, kecil;
vector<int> ans;

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> v;
	mini = 1e9;
	for (int i = 1; i < 10; i++) {
		cin >> arr[i];
		if (arr[i] < mini) {
			mini = arr[i];
			kecil = i;
		}
	}
	int len = v / mini;
	for (int i = 0; i < len; i++) ans.pb(kecil);
	int cost = len * mini;
	int depan = 0;
	for (int i = 0; i < len; i++){
		cost -= arr[ans[i]];
		int tcost = cost + depan;
		// cout << "yy " << tcost << endl;
		for (int j = 9; j >= kecil; j--){
			if (v >= arr[j] + tcost){
				ans[i] = j;
				depan += arr[j];
				break;
			}
		}
		// cout << "x " << ans[i] << endl;
	}
	if (sz(ans) == 0) cout << -1 << endl;
	else {
		for (auto a : ans) cout << a; cout << endl;
	}
	return 0;
}