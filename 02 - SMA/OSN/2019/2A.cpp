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
const int MAXN = 2e5 + 5;

int n, m;

struct paket{
	int a, b;
	int no;
};

bool cmp(paket x, paket y){
	if (x.a == y.a) return x.b < y.b;
	return x.a < y.a;
}

paket arr[MAXN];

int ans[MAXN];
int kurang[MAXN];

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> arr[i].a >> arr[i].b;
		arr[i].no = i;
	}
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++){
		int nx = arr[i].a;
		int ny = arr[i].b;
		int lo = i+1;
		int hi = n-1;
		int idx = n;
		while (lo <= hi){
			int mid = (lo + hi) >> 1;
			if (arr[mid].a > ny){
				idx = min(idx, mid);
				hi = mid-1;
			}else{
				lo = mid+1;
			}
		}
		ans[arr[i].no] += (idx-1-(i+1)+1);
		// cout << "xxx " << arr[i].no << " " << (idx-1-(i+1)+1) << '\n';
		kurang[idx] += 1;
		kurang[n] -= 1;
	}
	for (int i = 0; i < n; i++){
		kurang[i] += (i > 0 ? kurang[i-1] : 0);
		ans[arr[i].no] += i-kurang[i];
	}
	for (int i = 0; i < n; i++){
		cout << ans[i] << '\n';
	}
	return 0;
}