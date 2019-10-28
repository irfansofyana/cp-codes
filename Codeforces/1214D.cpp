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

int n, m;
vector<vector<char> > arr;
vector<vector<bool> > visit;

bool inside(int x,int y){
	return (x >= 0 && x < n && y >= 0 && y < m);
}

bool dfs(int x, int y){
	if (x < 0 || x >= n || y < 0 || y >= m || arr[x][y] == '#' || visit[x][y]) return false;
	if (x == n-1 && y == m-1) return true;
	if (x != 0 || y != 0) visit[x][y] = true;
	bool can = false;
	if (inside(x+1, y)) can = (can || dfs(x+1, y));
	if (inside(x, y+1)) can = (can || dfs(x, y+1));
	return can;
}

void clear(){
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			visit[i][j] = false;
		}
	}
}

int main(){
	// #ifndef ONLINE_JUDGE
	//	freopen("in.txt", "r", stdin);
	// #endif
	OPTIMIZE
	cin >> n >> m;
	arr.resize(n);
	visit.resize(n);
	for (int i = 0; i < n; ++i){
		arr[i].resize(m);
		visit[i].resize(m);
		for (int j = 0; j < m; ++j){
			char c; cin >> c;
			arr[i][j] = c;
			visit[i][j] = false;
		}
	}
	if (!dfs(0, 0)) cout << 0 << '\n';
	else if (!dfs(0, 0)) cout << 1 << '\n';
	else cout << 2 << '\n';
	return 0;
}