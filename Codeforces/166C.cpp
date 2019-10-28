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

vector<int> arr;
int N;
int X, ans;

bool ada(int x){
	for (int i = 0; i < N; i++){
		if (arr[i] == X) return true;
	}
	return false;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		arr.pb(tmp);
	}
	sort(arr.begin(), arr.end());
	bool add=false;
	if (!ada(X)) {
		arr.pb(X);
		add = true;
	}
	sort(arr.begin(), arr.end());
	int n = sz(arr);
	ans = 1e9;
	for (int i = 0; i < n; i++){
		if (arr[i] == X){
			int pos = i + 1;

			//kasus1
			int x1 = n - 2 * pos + 1;
			if (x1 >= 0 && (n+x1+1)%2 == 0){
				ans = min(ans, x1);
			}
			//kasus2 
			int x2 = n - 2 * pos;
			if (x2 >= 0 && (n+x2+1)%2 == 1){
				ans = min(ans, x2);
			}
			//kasus3
			int x3 = 2 * pos - n - 1;
			if (x3 >= 0 && (n+x3+1)%2 == 0){
				ans = min(ans, x3);
			}
			//kasus4
			int x4 = 2 * pos - n;
			if (x4 >= 0 && (n+x4+1)%2 == 1){
				ans = min(ans, x4);
			}
			// cout << pos << '\n';
		}
	}
	cout << ans+(add ? 1 : 0) << '\n';
	return 0;
}