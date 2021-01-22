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

int q;
LL k;

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> q;
	while (q--){
		cin >> k;
		if (k <= 45){
			LL cur = 0;
			for (int i = 1; i <= 9; ++i){
				cur += i;
				if (cur >= k){
					cur -= i;
					cout << k-cur << '\n';
					break;
				}
			}
		}else {
			LL sum = 45;
			LL awal = 11;
			LL banyak = 90;
			for (int i = 2; ; ++i){
				LL akhir = awal + ((banyak/2)-1)*i;
				LL tsum = (banyak/2)*(awal+akhir);
				if (sum + tsum <= k){
					sum += tsum;
					awal = akhir + i+1;
					banyak *= 10;
				}else {
					k -= sum;
					
				}
			}
		}
	}
	return 0;
}