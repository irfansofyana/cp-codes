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

const int MAXN = 2e5+3;

struct paket{
	int a, b;
	int no;
};

int n, s, q;
int parent[MAXN];
int cnt[MAXN];
vector<paket> arr;

bool cmp(paket x, paket y){
	if (x.a == y.a) return x.b < y.b;
	return x.a < y.a;
}

int cari(int x){
	return (parent[x] == x ? x : parent[x] = cari(parent[x]));
}

void gabung(int a, int b){
	int x = cari(a);
	int y = cari(b);
	if (x != y){
		parent[x] = y;
		cnt[y] += cnt[x];
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endi
	OPTIMIZE
	cin >> n >> s >> q;
	for (int i = 1; i <= n; i++){
		int t; cin >> t;
		parent[i] = i;
		cnt[i] = 1;
		for (int j = 0; j < t; j++){
			int a, b; cin >> a >> b;
			paket tmp;
			tmp.a = a; tmp.b = b; tmp.no = i;
			arr.pb(tmp);
		}
	}
	sort(arr.begin(), arr.end(), cmp);
	int lo, hi;
	int curr;
	for (int i = 0; i < sz(arr); i++){
		if (i == 0){
			lo = arr[i].a; hi = arr[i].b;
			curr = arr[i].no;
		}else {
			if (arr[i].a > hi){
				lo = arr[i].a; hi = arr[i].b;
				curr = arr[i].no;
			}else {
				gabung(arr[i].no, curr);
				hi = max(hi, arr[i].b);
				curr = arr[i].no;
			}
		}
	}
	while (q--){
		int x; cin >> x;
		cout << cnt[cari(x)] << '\n';
	}
	return 0;
}