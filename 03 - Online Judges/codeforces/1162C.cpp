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

const int MAXN= 2e5+5;
int n, k;
vector<int> arr[MAXN];
int pertama;

bool cek(int bil, int lo, int hi){
	if (lo > hi) return true;
	int l = lower_bound(arr[bil].begin(), arr[bil].end(), lo) - arr[bil].begin();
	int h = upper_bound(arr[bil].begin(), arr[bil].end(), hi) - arr[bil].begin();
	h--;
	return (h-l+1 <= 0);
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> k;
	for (int i = 0; i < k; i++){
		int bil;
		cin >> bil;
		arr[bil].pb(i);
		if (i == 0) pertama = bil;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++){
		int prv = ans;
		if (sz(arr[i]) == 0) {
			if (i == 1) ans += 2;
			else if (i == n) ans += 2;
			else ans += 3;
		}else {
			int kiri = i-1;
			int kanan = i+1;
			int posisi = arr[i][0]+1;
			if (kiri >= 1){
				if (cek(kiri, posisi, k-1)) ans++;
			}
			if (kanan <= n){
				if (cek(kanan, posisi, k-1)) ans++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}