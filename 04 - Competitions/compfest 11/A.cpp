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

const int MAXN = 1e5+5;
int n;
LL ans; 

struct paket{
	LL l, r;
};

paket arr[MAXN];

bool cmp(paket a, paket b){
	if (a.l == b.l) return a.r < b.r;
	return a.l < b.l;
}

LL f(LL l, LL r){
	if (r < l) return 0;
	LL sum = ((r-l+1)*(l+r))/2;
	return sum;
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i].l >> arr[i].r;
	}
	sort(arr, arr + n, cmp);
	int le, ri;
	for (int i = 0; i < n; i++){
		if (i == 0) {
			ans += f(arr[i].l, arr[i].r);
			le = arr[i].l;
			ri = arr[i].r;
		}else {
			if (arr[i].l <= ri){
				if (arr[i].r <= ri) continue;
				else {
					ans += f(ri+1, arr[i].r);
					ri = arr[i].r;
				}
			}else {
				ans += f(arr[i].l, arr[i].r);
				ri = arr[i].r;
			}
		}	
	}
	cout << ans << '\n';
	return 0;
}