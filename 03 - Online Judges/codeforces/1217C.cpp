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

int t, n;
int nol[MAXN+2];
string s;
LL ans;

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> t;
	while (t--) {
		cin >> s;
		memset(nol, -1, sizeof nol);
		ans = 0LL;
		int curr = 0;
		int i = 0;
		int len = sz(s);
		while (i < len){
			if (s[i] == '0') {
				++curr;
				++i;
			}else {
				nol[i] = curr;
				int j = i+1;
				while (j < len && s[j] == '1'){
					++j;
				}
				i = j;
				curr = 0;
			}
		}
		// for (int i = 0; i < len; ++i){
		// 	cout << nol[i] << " ";
		// }cout << '\n';
		for (int i = 0; i < len; ++i){
			if (s[i] == '1'){
				int bil = 1;
				int ret = 0;
				++ans;
				++ret;
				for (int j = i+1; j < len && 2*bil+(s[j]=='1') <= MAXN; ++j){
					int pjg = 2*bil + (s[j] == '1') - (j-i+1);
					if (pjg == 0) ++ans;
					else if (nol[i] >= pjg) ++ans;
					bil = 2*bil + (s[j] == '1');
				}
			}
		}	
		cout << ans << '\n';
	}
	return 0;
}