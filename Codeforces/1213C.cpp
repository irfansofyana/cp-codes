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

int rep[11];
int sum[11];
int q;
LL n, m;

void pre(){
	bool udah[11];
	for (int i = 0; i <= 9; ++i){
		memset(udah, false, sizeof udah);
		for (int j = 1; ; ++j){
			int bil = (j * i)%10;
			if (!udah[bil]) {
				udah[bil] = true;
				sum[i] += bil;
			}
			else {
				rep[i] = j-1;
				break;
			}
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	pre();
	cin >> q;
	while (q--){
		cin >> n >> m;
		if (n < m) cout << 0 << '\n';
		else {
			LL bagi = n / m;
			LL ldig = m%10;
			LL ans = sum[ldig] * (bagi/rep[ldig]);
			for (int i = 1; i <= bagi%rep[ldig]; ++i){
				ans += (ldig * i)%10;
			}
			cout << ans << '\n';
		}
	}
	return 0;
}