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
*/
#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define sz(s) (int)s.size()
#define OPTIMIZE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long LL;
typedef pair<int,int> ii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<ii> vii;
typedef vector<pll> vll;

LL n;
int t, tc;

int main(){
	// #ifndef ONLINE_JUDGE
 //    	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> t;
	while (t--) {
		cin >> n;
		LL ans1 = n*(n-1);
		LL ans2 = 4;
		LL fpb = __gcd(ans1, ans2);
		if (ans1 == 0)
			cout << "Case " << ++tc << ": " << 0 << '\n';
		else if (ans2/fpb == 1)
			cout << "Case " << ++tc << ": " << ans1/fpb << '\n';
		else 
			cout << "Case " << ++tc << ": " << ans1/fpb << "/" << ans2/fpb << '\n';
	}
	return 0;
}