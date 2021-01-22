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

LL n, q, k;
LL x, y;

void solve0(){
	if (k == 1){
		while (q--){
			LL x, y;
			cin >> x >> y;
			if (x > y) swap(x, y);
			cout << abs(x-y) << '\n';
		}
		return;
	}
	while(q--){
		LL x, y;
		cin >> x >> y;
		if (y < x) swap(x, y);
		if (x == 1) cout << 1 << '\n';
		else cout << 2 << '\n';
	}
}

void getAncestor(vector<LL> &v, LL now){
	v.pb(now);
	while (now != 1){
		LL bagi = now / k;
		if (now % k > 1) bagi++;
		v.pb(bagi);
		now = bagi;	
	}
}

void solve1(){
	while (q--){
		LL x, y;
		cin >> x >> y;
		if (x > y) swap(x, y);
		vector<LL> a;
		vector<LL> b;
		getAncestor(a, x);
		getAncestor(b, y);
		set<int> st;
		for (auto it : b){
			st.insert(it);
		}
		LL ans = 0;
		LL bilangan = 1;
		for (auto it : a){
			if (st.find(it) != st.end()) {
				bilangan = (LL)it;
				break;
			}else ans++;
		}
		for (auto it : b){
			if (it != bilangan) ans++;
			else break;
		}
		cout << ans << '\n';
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	cin >> n >> k >> q;
	if (n <= k+1 ||  k == 1) solve0();
	else solve1();
	return 0;
}