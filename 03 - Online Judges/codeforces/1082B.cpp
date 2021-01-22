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

int N;
string s;
int g, b;
bool gold;
vector<int> arr;

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	cin >> N >> s;
	int i = 0;
	gold = false;
	int ans = 0;
	while (i < N){
		int j = i + 1;
		int cnt = 1;
		while (j < N && s[j] == s[i]){
			j++;
			cnt++;
		}
		if (i == 0 && s[i] == 'G') gold = true;
		if (s[i] == 'G') {
			g++;
			ans = max(ans, cnt);
		}
		else b++;
		arr.pb(cnt);
		i = j;
	}
	//GSGSGS
	//SGSGSG
	int start = gold ? 1 : 0;
	// cout << g << '\n';
	for (int i = start; i < sz(arr); i+=2){
		// cout << i << " xx\n"; 
		if (i == 0){
			if (g >= 2){
				ans = max(ans, arr[i+1]+1);
			}
		}else if (i == sz(arr)-1) {
			if (g >= 2){
				ans = max(ans, arr[i-1]+1);
			}
		}else{
			if (arr[i] == 1){
				ans = max(ans, arr[i-1]+arr[i+1]);
				if (g > 2) ans = max(ans, arr[i-1] + arr[i+1]+1);
			}else {
				ans = max(ans, arr[i-1]+1);
				ans = max(ans, arr[i+1]+1);
			}
		}
	}
	cout << ans << '\n';
	return 0;
}