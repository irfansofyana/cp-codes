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

const int MAXN = 1e5+2;

int N;
vector<int> adj[MAXN];
LL ans[MAXN];
bool visited[MAXN];

LL product(LL a, LL b){
	if (a >= MODPRIME) a %= MODPRIME;
	if (b >= MODPRIME) b %= MODPRIME;
	return (a * b) % MODPRIME;
}

LL dfs(int node){
	visited[node] = true;
	int ada = 0;
	for (auto neighbour : adj[node]){
		if (!visited[neighbour]){
			ada++;
		}
	}
	if (ada == 0) {
		return -1;
	}else {
		int minus = 0;
		LL cnt = 1;
		LL kurang = 1;
		LL nilai = 1;
		int masuk = 0;
		for (auto neighbour : adj[node]){
			if (!visited[neighbour]){
				masuk++;
				LL tmp = dfs(neighbour);
				nilai = tmp;
				if (tmp == -1){
					minus++;
				}else {
					cnt = product(cnt, 2 * tmp);
					kurang = product(kurang, tmp);
				}
			}
		}
		if (masuk == minus && masuk > 0) return 1;
		else if (masuk == 1) return nilai;
		else if (minus == 0) return (cnt - kurang + MODPRIME) % MODPRIME;
		else return cnt;
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// #endif
	//OPTIMIZE
	cin >> N;
	for (int i = 0; i < N-1; i++){
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	cout << product(2, abs(dfs(1))) << '\n';
	return 0;
}